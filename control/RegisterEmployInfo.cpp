#include "RegisterEmployInfo.h"
#include "RegisterEmployInfoUI.h"
#include <string>
#include "EmployCollection2.h"

RegisterEmployInfo::RegisterEmployInfo()
{
    RegisterEmployInfoUI* registerEmployInfoUI = new RegisterEmployInfoUI;
    registerEmployInfoUI->CreateNewEmployInfo(this);
}

void RegisterEmployInfo::SendEmployInfoData(string position, int applicantsNum, string finishDate)
{
    employInfoCollection->AddEmployInfo(position, applicantsNum, finishDate);
}
