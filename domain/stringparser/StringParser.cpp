#include "StringParser.h"
#include <sstream>


/**
 * 함수 이름 : StringParser
 * 기능    : 생성자
 * 전달 인자: string
 * 반환값  : null
 */
StringParser::StringParser(const string& input) {
    istringstream iss(input);
    string token;

    while (getline(iss, token, ' ')) {
        tokens.push_back(token);
    }
    
}


/**
 * 함수 이름 : getTokens
 * 기능    : 띄어쓰기로 구분된 벡터 토큰 반환
 * 전달 인자: void
 * 반환값  : vector<string>
 */
vector<string> StringParser::getTokens() const {
    return tokens;
}
