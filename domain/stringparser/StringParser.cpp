#include <StringParser.h>
#include <sstream>

StringParser::StringParser(const std::string& input) {
    std::istringstream iss(input);
    std::string token;

    while (std::getline(iss, token, ' ')) {
        tokens.push_back(token);
    }
    
}

std::vector<std::string> StringParser::getTokens() const {
    return tokens;
}
