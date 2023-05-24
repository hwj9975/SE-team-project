#include <iostream>

#include "EmployInfo.h"

using namespace std;

EmployInfo::EmployInfo(string inputPosition, int inputApplicantsNum, string inputFinishDate)
{
    position = inputPosition;
    applicantsNum = inputApplicantsNum;
    finishDate = inputFinishDate;
}