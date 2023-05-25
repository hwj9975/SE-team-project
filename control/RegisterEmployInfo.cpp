#include "RegisterEmployInfo.h"
#include "RegisterEmployInfoUI.h"
#include <string>
#include "EmployCollection2.h"
#include "EmployInfoCollection.h"


using namespace std;

/**
 * 함수 이름 : RegisterEmployInfo
 * 기능    : RegisterEmployInfo생성자
 * 전달 인자: string input
 * 반환값  : 없음
 */
RegisterEmployInfo::RegisterEmployInfo(string input)
{
    RegisterEmployInfoUI* registerEmployInfoUI = new RegisterEmployInfoUI;
    registerEmployInfoUI->createNewEmployInfo(input,this);
}

void RegisterEmployInfo::sendEmployInfoData(string position, int applicantsNum, string finishDate)
{
    EmployInfoCollection* instance = EmployInfoCollection::getInstance();

    instance->addEmployInfo(position, applicantsNum, finishDate);
}
