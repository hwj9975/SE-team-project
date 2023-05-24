#ifndef STRINGPARSER_H
#define STRINGPARSER_H

#include <string>
#include <vector>

class StringParser
{
private:
    std::vector<std::string> tokens;

public:
    StringParser(const std::string& input);
    std::vector<std::string> getTokens() const;
};

#endif
