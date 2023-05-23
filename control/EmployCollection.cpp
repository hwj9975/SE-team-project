#include <string>
#include <algorithm>
#include <map>

#include "EmployCollection.h"
#include "EmployInfo.h"

/*
    �Լ� �̸� : EmployCollection::getEmployStats()
    ���	  :
    ���� ���� : ����
    ��ȯ��    : ����
*/
bool EmployCollection::getEmployStats()
{
    // ������ ���� Ƚ�� ����
    map<string, int> employStats;    // key: ����, value: ���� Ƚ��

    for (const auto& employ : ownedEmployList)
    {
        string pos = employ.second.getPosition();
    }

    // ������ ������ ���� ���
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