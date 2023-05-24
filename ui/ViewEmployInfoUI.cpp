#include <fstream>

#include "ViewEmployInfoUI.h"
#include "ViewEmployInfo.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

ifstream inputFile(INPUT_FILE_NAME);   // input.txt 를 읽기모드로 열음
ofstream outputFile(OUTPUT_FILE_NAME); // output.txt 를 쓰기모드로 열음

void ViewEmployInfoUI::RequestEmployInfo(ViewEmployInfo* viewEmployInfo)
{
    viewEmployInfo->ShowEmployInfo();
}

void ViewEmployInfoUI::ShowEmployInfo(string position, int applicantsNum, string finishDate)
{
    outputFile << "> ";
    outputFile << position << " " << applicantsNum << " " << finishDate << endl;
}
