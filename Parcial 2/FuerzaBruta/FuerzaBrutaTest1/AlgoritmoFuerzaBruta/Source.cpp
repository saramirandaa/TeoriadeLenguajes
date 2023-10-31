#include <iostream>
#include <string>

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
    std::cout << "Enter the string to be checked: ";
    std::string input;
    std::cin >> input;

    Parser parser(input);
    if (parser.parse()) {
        std::cout << "SUCCESSFUL PARSE" << std::endl;
    }
    else {
        std::cout << "UNSUCCESSFUL PARSE" << std::endl;
    }

    return 0;
}
