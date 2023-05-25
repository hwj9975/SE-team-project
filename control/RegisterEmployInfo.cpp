#include "RegisterEmployInfo.h"
#include "RegisterEmployInfoUI.h"
#include <string>

#include "EmployInfoCollection.h"


using namespace std;

/*
 * 함수 이름 : RegisterEmployInfo
 * 기능    : RegisterEmployInfo클래스 객체 생성자
 * 전달 인자: string input -입렵되는 값들
 * 반환값  : 없음
 */
RegisterEmployInfo::RegisterEmployInfo(string input)
{
    RegisterEmployInfoUI* registerEmployInfoUI = new RegisterEmployInfoUI;
    employInfo = registerEmployInfoUI->createNewEmployInfo(input,this);
}

/*
 * 함수 이름 : sendEmployInfoData
 * 기능    : 입력받은 채용정보들을 채용정보 콜렉션에 전달하는 함수입니다
 * 전달 인자: string position, int applicantsNum, string finishDate
 * 반환값  : void
 */
string RegisterEmployInfo::sendEmployInfoData(string position, int applicantsNum, string finishDate)
{
    EmployInfoCollection* instance = EmployInfoCollection::getInstance();

    instance->addEmployInfo(position, applicantsNum, finishDate);

    RegisterEmployInfoUI* registerEmployInfo = new RegisterEmployInfo;
    return registerEmployInfo->ShowRegistrationCompleteMessage(position, applicantsNum, finishDate); // 등록완료하였다고 메세지를 보낸다.
}

string RegisterEmployInfo::getEmployInfo(){
    return employInfo;
}
