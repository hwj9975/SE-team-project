#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <tuple>
#include <fstream>

#include "RegisterEmployInfoUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

ifstream inputFile(INPUT_FILE_NAME);   // input.txt 를 읽기모드로 열음
ofstream outputFile(OUTPUT_FILE_NAME); // output.txt 를 쓰기모드로 열음

void RegisterEmployInfoUI::CreateNewEmployInfo(RegisterEmployInfo* registerEmployInfo)
{
    string position, finishDate;
    int applicantsNum;

    inputFile >> position >> applicantsNum >> finishDate;
    registerEmployInfo->SendEmployInfoData(position, applicantsNum, finishDate);
}
