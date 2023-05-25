#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <tuple>
#include <fstream>
#include "StringParser.h"


#include "RegisterEmployInfoUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

ifstream inputFile(INPUT_FILE_NAME);   // input.txt 를 읽기모드로 열음
ofstream outputFile(OUTPUT_FILE_NAME); // output.txt 를 쓰기모드로 열음


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

    // inputFile >> position >> applicantsNum >> finishDate;
    registerEmployInfo->sendEmployInfoData(position, applicantsNum, finishDate);
}
