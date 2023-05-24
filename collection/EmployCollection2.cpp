#include "EmployCollection2.h"
#include "EmployInfo.h"

using namespace std;

EmployInfoCollection* employInfoCollection = new EmployInfoCollection(); // 전역으로 설정한 employInfoCollection 인스턴스 정의

void EmployInfoCollection::AddEmployInfo(string position, int applicantsNum, string finishDate)
{
    EmployInfo* newEmployInfo = new EmployInfo(position, applicantsNum, finishDate);
    ownedEmployList.push_back(newEmployInfo);
}

vector <EmployInfo*> EmployInfoCollection::GetListEmployInfo()
{
    return this->ownedEmployList; // 리턴 타입은 vector <EmployInfo*> 타입이다
}