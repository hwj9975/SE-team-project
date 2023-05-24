#include <string>
#include <algorithm>
#include <map>

#include "EmployCollection.h"
#include "EmployInfo.h"

/*
    함수 이름 : EmployCollection::getEmployStats()
    기능	  :
    전달 인자 : 없음
    반환값    : 없음
*/
bool EmployCollection::getEmployStats()
{
    // 업무별 지원 횟수 저장
    map<string, int> employStats;    // key: 업무, value: 지원 횟수

    for (const auto& employ : ownedEmployList)
    {
        string pos = employ.second.getPosition();
    }

    // 업무별 지원자 수를 출력
    if (employStats.empty())
    {
        return false;
    }
    else
    {
        for (const auto& stats : employStats)
        {
            cout << stats.first << " " << stats.second << endl;
        }
        return true;
    }
}