// Sara Rocio Miranda Mateos 0244643

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

class Parser {
private:
    std::string input;
    int index;

    bool E();
    bool S();
    bool B();
public:
    Parser(const std::string& str) : input(str), index(0) {}
    bool parse();
};

bool Parser::E() {
    int save = index;
    if (index < input.length() && input[index] == 'a' && ++index && E()) return true;

    index = save;
    if (index < input.length() && input[index] == 'b' && ++index && E()) return true;

    index = save;
    if (index < input.length() && input[index] == 'c' && ++index && S()) return true;

    index = save;
    return false;
}

bool Parser::S() {
    int save = index;
    if (index < input.length() && input[index] == 'e' && ++index && S()) return true;

    index = save;
    if (index < input.length() && input[index] == 'b' && ++index && B()) return true;

    index = save;
    if (index < input.length() && input[index] == 'c' && ++index && B()) return true;

    index = save;
    return false;
}

bool Parser::B() {
    int save = index;
    if (index < input.length() && input[index] == 'b' && ++index && E()) return true;

    index = save;
    if (index < input.length() && input[index] == 'c' && ++index && E()) return true;

    index = save;
    if (index < input.length() && (input[index] == 'c' || input[index] == 'g' || input[index] == 'h') && ++index) return true;

    index = save;
    return false;
}

bool Parser::parse() {
    return E() && index == input.length();
}

int main() {
    std::string input_file_path = "texto.txt";
    std::ifstream file(input_file_path);
    
    if (!file) {
        std::cerr << "Unable to open the file: " << input_file_path << std::endl;
        return 1;
    }

    std::string line;
    std::cout << "Grammar from file: " << std::endl;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    std::string input_str;
    std::cout << "Enter the string to be checked: ";
    std::cin >> input_str;

    Parser parser(input_str);
    parser.parse();
    if (parser.parse()) {
        std::cout << "SUCCESSFUL PARSE" << std::endl;
    }
    else {
        std::cout << "UNSUCCESSFUL PARSE" << std::endl;
    }

    return 0;
}
