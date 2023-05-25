#ifndef STRINGPARSER_H
#define STRINGPARSER_H

#include <string>
#include <vector>
using namespace std;

class StringParser
{
private:
    vector<string> tokens;

public:
    StringParser(const string& input);
    vector<string> getTokens() const;
};

#endif
