#include <iostream>
#include <string>
#include <vector>

#include "StringParser.h"


#include "RegisterEmployInfoUI.h"

using namespace std;

/**
 * 함수 이름 : CreateNewEmployInfo
 * 기능    : 업무, 인원 수 , 마감날짜름 입력받은뒤 컨트롤로 전달
 * 전달 인자: string input, RegisterEmployInfo* registerEmployInfo
 * 반환값  : void
 */
void RegisterEmployInfoUI::createNewEmployInfo(string input, RegisterEmployInfo* registerEmployInfo)
{
// input을 ' ' 기준으로 파싱.
    StringParser parser(input);
    vector<string> tokens = parser.getTokens(); 

    string position = tokens.at(0);
    int applicantsNum = stoi(tokens.at(1));
    string finishDate= tokens.at(2);

    registerEmployInfo->sendEmployInfoData(position, applicantsNum, finishDate);
}
