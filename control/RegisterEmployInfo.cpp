#include "RegisterEmployInfo.h"
#include "RegisterEmployInfoUI.h"
#include <string>
#include "EmployCollection2.h"
#include "EmployInfoCollection.h"


using namespace std;


RegisterEmployInfo::RegisterEmployInfo(string input)
{
    RegisterEmployInfoUI* registerEmployInfoUI = new RegisterEmployInfoUI;
    registerEmployInfoUI->CreateNewEmployInfo(input,this);
}

void RegisterEmployInfo::SendEmployInfoData(string position, int applicantsNum, string finishDate)
{
    AccountCollection* instance = AccountCollection::getInstance();

    instance->AddEmployInfo(position, applicantsNum, finishDate);
}
