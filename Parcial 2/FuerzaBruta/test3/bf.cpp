#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <stack>
#include <vector>

using namespace std;

// ANSI escape codes for colored terminal output
const string RED = "\033[1;31m";
const string GREEN = "\033[0;32m";
const string YELLOW = "\033[1;33m";
const string CYAN = "\033[1;36m";
const string ORANGE_APPROX =
    "\033[0;33m"; // Bright Yellow (might look orange in some terminals)
const string PURPLE = "\033[1;35m";        // Magenta
const string BRIGHT_PURPLE = "\033[1;95m"; // Bright Magenta
const string BLACK = "\033[1;30m";
const string BLUE = "\033[1;34m";
const string MAGENTA = "\033[1;35m";
const string WHITE = "\033[1;37m";
const string BRIGHT_BLACK = "\033[1;90m";
const string BRIGHT_RED = "\033[1;91m";
const string BRIGHT_GREEN = "\033[1;92m";
const string BRIGHT_YELLOW = "";
const string BRIGHT_BLUE = "\033[1;94m";
const string BRIGHT_MAGENTA = "\033[1;95m";
const string BRIGHT_CYAN = "\033[1;96m";
const string BRIGHT_WHITE = "\033[1;97m";
const string RESET = "\033[0m";

struct Production {
  char nonTerminal;
  vector<string> alternates;
  bool isEmptyProduction;

  // Add default values for the constructor parameters
  Production(char nonTerminal = 'S', bool isEmpty = false)
      : nonTerminal(nonTerminal), isEmptyProduction(isEmpty) {}
};

struct Choice {
  int positionInT;
  int positionInSENT;
  char nonTerminal;
  int productionIndex;
};

vector<Production> grammar;
string T;
int n;
int i;
string SENT;
char STATE;
char startingSymbol;
map<char, int> P;
int T_HIST;
map<char, int> alternateTried;
stack<Choice> choices;

bool readGrammarFromFile(const string &filename) {
  ifstream file(filename);
  if (!file.is_open()) {
    return false;
  }

  bool isFirstProduction = true;
  string line;
  while (getline(file, line)) {
    istringstream iss(line);
    string token;

    // Determine if the first production should include '#'
    bool addEmptyProduction = false;
    if (isFirstProduction) {
      if (line.find("#") == string::npos) {
        addEmptyProduction = true;
        line += " #"; // Add '#' to the end of the line
      }
      isFirstProduction = false;
    }

    // Initialize Production with appropriate values
    Production production(token[0], addEmptyProduction);

    iss >> token;
    production.nonTerminal = token[0];

    iss.ignore(2, ' ');

    while (getline(iss, token, '|')) {
      token.erase(0, token.find_first_not_of(' ')); // ltrim
      token.erase(token.find_last_not_of(' ') + 1); // rtrim
      production.alternates.push_back(token);
    }

    grammar.push_back(production);
    alternateTried[production.nonTerminal] = 0;
  }

  return true;
}

void printGrammar() {
  cout << PURPLE << "Productions" << RESET << endl;
  for (const auto &production : grammar) {
    for (const auto &alternate : production.alternates) {
      cout << production.nonTerminal << " -> " << alternate << endl;
    }
  }
}

bool isRecognizedByGrammar(char c) {
  for (const auto &production : grammar) {
    if (production.nonTerminal == c) {
      return true;
    }
  }

  for (const auto &production : grammar) {
    for (const auto &alternate : production.alternates) {
      if (alternate.find(c) != string::npos) {
        return true;
      }
    }
  }

  return false;
}

int getMaxAlternates() {
  int maxAlternates = 0;
  for (const auto &production : grammar) {
    int currentAlternates = production.alternates.size();
    if (currentAlternates > maxAlternates) {
      maxAlternates = currentAlternates;
    }
  }
  return maxAlternates;
}

bool isNonTerminal(char c) {
  for (const auto &production : grammar) {
    if (production.nonTerminal == c) {
      return true;
    }
  }
  return false;
}

bool isTerminal(char c) {
  for (const auto &production : grammar) {
    for (const auto &alternate : production.alternates) {
      if (alternate.find(c) != string::npos) {
        return true;
      }
    }
  }
  return false;
}

Production *getProduction(char nonTerminal) {
  for (auto &production : grammar) {
    if (production.nonTerminal == nonTerminal) {
      return &production;
    }
  }
  return nullptr;
}

bool parse() {
  // At the beginning of the parse function
  cout << YELLOW << "DEBUG: Entering parse function" << RESET << endl;
  cout << YELLOW << "DEBUG: i=" << i << ", T_HIST=" << T_HIST
       << ", SENT=" << SENT << RESET << endl;
  cout << YELLOW << "DEBUG: Current STATE: " << STATE << RESET << endl;
  cout << YELLOW << "DEBUG: Current symbol: " << SENT[T_HIST] << RESET << endl;

  n = T.length();
  while (true) {

    bool hasNonTerminal = false;
    for (int j = T_HIST; j < SENT.length(); j++) {
      if (SENT[j] != 'ε' && isNonTerminal(SENT[j])) {
        hasNonTerminal = true;
        break;
      }
    }

    if (!hasNonTerminal) {
      return true; // No remaining non-terminals, parsing is complete
    }

    if (i == n && T_HIST < SENT.length() && SENT[T_HIST] == '#') {
      return true; // Successfully parsed the input string
    }
    if (i >= n || T_HIST >= SENT.length() || i < 0 || T_HIST < 0) {
      cout << RED << "DEBUG: Out of bounds." << RESET << endl;
      return false;
    }

    char p = P[T_HIST];
    char s = SENT[T_HIST];
    char t = T[i];

    cout << YELLOW << "DEBUG: i=" << i << ", T_HIST=" << T_HIST << ", p=" << p
         << ", s=" << s << ", t=" << t << ", SENT=" << SENT << RESET << endl;

    cout << YELLOW << "DEBUG: Current STATE: " << STATE << RESET
         << endl; // Print the current state

    int CASE = 0;
    Production *prod = getProduction(s);

    if (STATE == 'q' && i == n && s == '#') {
      CASE = 3;
    } else if (STATE == 'q') {
      if (isNonTerminal(s)) {
        CASE = 1;
      } else if (t == s || (s == 'ε' && t == '#')) { // Handle epsilon
        CASE = 2;
      } else {
        CASE = 4;
      }
    } else if (!isNonTerminal(s)) {
      CASE = 5;
    } else if (prod != nullptr && p < prod->alternates.size()) {
      CASE = 6;
    } else if (i == 1 && s == startingSymbol) {
      cout << RED << "UNSUCCESSFUL PARSE" << RESET << endl;
      return false;
    } else {
      CASE = 7;
    }

    Choice lastChoice;
    if (!choices.empty()) {
      lastChoice = choices.top();
    }

    string expanded;

    switch (CASE) {
    case 1: {
      cout << GREEN << "DEBUG: Entering CASE 1 (Expand Non-Terminal)" << RESET
           << endl;
      P[T_HIST] = 0; // Initialize P to 0 for the new non-terminal

      if (prod == nullptr) {
        cout << RED << "DEBUG: No production found for character '" << s << "'."
             << RESET << endl;
        return false;
      }

      if (alternateTried[s] >= prod->alternates.size()) {
        cout << RED
             << "DEBUG: alternateTried index out of bounds for character '" << s
             << "'." << RESET << endl;
        return false;
      }

      if (prod->isEmptyProduction) {
        // Handle empty production by skipping 's'
        T_HIST--;
        continue; // Skip to the next symbol in 'SENT'
      }

      try {
        expanded = prod->alternates[alternateTried[s]]; // Assign value here
        if (isNonTerminal(expanded[0])) {
          // Handle the case where a non-terminal is expected
          if (i >= n || T_HIST >= SENT.length() || i < 0 || T_HIST < 0) {
            cout << RED << "Error: Expected non-terminal '" << expanded[0]
                 << "' in SENT, but it doesn't match the input." << RESET
                 << endl;
            return false;
          }
          // Check if the next symbol in T matches the expected non-terminal
          if (T[i] != expanded[0]) {
            cout << RED << "Error: Expected non-terminal '" << expanded[0]
                 << "' in T, but it doesn't match the input." << RESET << endl;
            return false;
          }
        }
        SENT = SENT.substr(0, T_HIST) + expanded + SENT.substr(T_HIST + 1);
      } catch (const std::out_of_range &e) {
        return false;
      }

      alternateTried[s]++;
      choices.push({i, T_HIST, s, alternateTried[s]});

      if (i == T.length()) {
        bool hasNonTerminal = false;
        for (int j = T_HIST; j < SENT.length(); j++) {
          if (SENT[j] != 'ε' && isNonTerminal(SENT[j])) {
            hasNonTerminal = true;
            break;
          }
        }

        if (!hasNonTerminal) {
          return true;
        }
      }
      break;
    }

    case 2: // Handle epsilon
      cout << GREEN << "DEBUG: Entering CASE 2 (Match Terminal or Epsilon)"
           << RESET << endl;
      if (s == 'ε') {
        if (SENT[T_HIST] == 'ε') {
          T_HIST++; // Move forward in SENT
        } else {
          cout << RED
               << "Error: Expected epsilon ('ε') in SENT, but it doesn't match."
               << RESET << endl;
          return false;
        }
      } else {
        // Handle matching terminal symbol
        if (t == s && SENT[T_HIST] == s) {
          T_HIST++;
          P[T_HIST] = 0; // Initialize P to 0 for the matched terminal
          if (T_HIST < SENT.length() && !isNonTerminal(SENT[T_HIST])) {
            i++;
          }
          SENT = SENT.substr(1);
        } else {
          cout << RED << "Error: Expected terminal '" << s
               << "' in SENT, but it doesn't match the input." << RESET << endl;
          return false;
        }
      }
      if (i == T.length()) {
        bool hasNonTerminal = false;
        for (int j = T_HIST; j < SENT.length(); j++) {
          if (SENT[j] != 'ε' && isNonTerminal(SENT[j])) {
            hasNonTerminal = true;
            break;
          }
        }

        if (!hasNonTerminal) {
          return true;
        }
      }
      break;

    case 3:
      cout << GREEN << "DEBUG: Entering CASE 3 (Successful Parse)" << RESET
           << endl;
      STATE = 't';
      SENT = "";
      cout << GREEN << "SUCCESSFUL PARSE" << RESET << endl;
      return true;
    case 4:
      if (choices.empty()) {
        cout << RED << "DEBUG: No more choices to backtrack to." << RESET
             << endl;
        cout << RED << "UNSUCCESSFUL PARSE" << RESET << endl;
        return false;
      }
      cout << ORANGE_APPROX << "DEBUG: Backtracking from CASE 4..." << RESET
           << endl;
      lastChoice = choices.top();
      choices.pop();
      i = lastChoice.positionInT;
      T_HIST = lastChoice.positionInSENT;
      SENT = SENT.substr(0, T_HIST) + lastChoice.nonTerminal +
             SENT.substr(T_HIST + 1);
      alternateTried[lastChoice.nonTerminal] = lastChoice.productionIndex;
      break;
    case 5:
      cout << YELLOW
           << "DEBUG: Entering CASE 5 (Backtrack on Terminal Mismatch)" << RESET
           << endl;
      if ((i > n || T_HIST >= SENT.length() || i < 0 || T_HIST < 0) &&
          !(i == n && SENT[T_HIST] == '#')) {
        cout << RED << "UNSUCCESSFUL PARSE" << RESET << endl;
        return false;
      }
      i--;
      T_HIST--;
      SENT = string(1, s) + SENT;
      break;
    case 6:
      if (P[T_HIST] < getProduction(s)->alternates.size() - 1) {
        cout << GREEN << "DEBUG: Trying next alternate for non-terminal " << s
             << RESET << endl;
        P[T_HIST]++;
        SENT =
            getProduction(s)->alternates[P[T_HIST]] + SENT.substr(T_HIST + 1);
      } else {
        cout << ORANGE_APPROX << "DEBUG: No more alternates for non-terminal "
             << s << ". Backtracking..." << RESET << endl;
        T_HIST--;
      }
      break;
    case 7:
      cout << YELLOW << "DEBUG: Entering CASE 7 (Backtrack on Non-Terminal)"
           << RESET << endl;
      if (choices.empty()) {
        cout << RED << "DEBUG: No more choices to backtrack to." << RESET
             << endl;
        cout << RED << "UNSUCCESSFUL PARSE" << RESET << endl;
        return false;
      }
      cout << ORANGE_APPROX << "DEBUG: Backtracking from CASE 7..." << RESET
           << endl;
      lastChoice = choices.top();
      choices.pop();
      i = lastChoice.positionInT;
      T_HIST = lastChoice.positionInSENT;
      SENT = SENT.substr(0, T_HIST) + lastChoice.nonTerminal +
             SENT.substr(T_HIST + 1);
      alternateTried[lastChoice.nonTerminal] =
          lastChoice.productionIndex -
          1; // Decrement to try the previous alternate
      break;
    }
    cout << BRIGHT_GREEN
         << "DEBUG: Recognized part of string: " << T.substr(0, i) << RESET
         << endl;
    cout << BRIGHT_BLUE << "DEBUG: Missing part of string: " << T.substr(i)
         << RESET << endl;
  }
  return false;
}

int main() {
  if (!readGrammarFromFile("grammar.txt")) {
    cout << RED << "Error reading the grammar file." << RESET << endl;
    return 1;
  }

  printGrammar();

  cout << CYAN << "--------------------------" << RESET << endl;

  cout << "Enter the string to analyze: ";
  cin >> T;

  // Check if the input string ends with '#', and if not, add it
  if (T.back() != '#') {
    T += '#';
  }

  cout << CYAN << "--------------------------" << RESET << endl;

  SENT = string(1, startingSymbol) + "#";
  T_HIST = 0;
  STATE = 'q';

  // Check if all characters in the input string are recognized by the grammar
  bool isValidInput = true;
  for (char c : T) {
    if (!isRecognizedByGrammar(c)) {
      cout << RED << "ERROR: Character '" << c
           << "' is not recognized by the grammar." << RESET << endl;
      isValidInput = false;
      break;
    }
  }

  if (!isValidInput) {
    cout << RED << "ERROR: THE INPUT STRING CANNOT BE GENERATED BY THE GRAMMAR."
         << RESET << endl;
    return 1;
  }

  // Check if the input string ends with '#', and if not, add it
  if (T.back() != '#') {
    T += '#';
  }

  if (parse()) {
    cout << GREEN << "DONE: INPUT STRING CAN BE GENERATED BY THE GRAMMAR."
         << RESET << endl;
  } else {
    cout << RED << "ERROR: THE INPUT STRING CANNOT BE GENERATED BY THE GRAMMAR."
         << RESET << endl;
  }

  return 0;
}
