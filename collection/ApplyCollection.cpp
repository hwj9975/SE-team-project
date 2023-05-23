#include <string>
#include <algorithm>
#include <map>

#include "ApplyCollection.h"
#include "ApplyInfo.h"

/*
    �Լ� �̸� : ApplyCollection::getApplyInfo()
    ���	  : ���� ������ ȸ�� �̸��� �������� �����Ͽ� ���� ���
    ���� ���� : ����
    ��ȯ��    : Boolean
*/
bool ApplyCollection::getApplyInfo() {
    
    // ȸ�� �̸� �������� ����
        sort(ownedApplyList.begin(), ownedApplyList.end(), [](const pair<string, ApplyInfo>& former, const pair<string, ApplyInfo>& latter)
            {
                return former.second.getCompanyName() < latter.second.getCompanyName();
            }
        );

    if (ownedApplyList.empty()) { return false; }

    for (const auto& apply : ownedApplyList)
    {
        ApplyInfo applyInfo = apply.second;
        cout << applyInfo.getCompanyName() << " " << applyInfo.getBusinessNum() << " " << applyInfo.getPosition() << " " << applyInfo.getEmployedNum() << " " << applyInfo.getFinishDate() << endl;
    }

    return true;
}


/*
    �Լ� �̸� : ApplyCollection::deleteCancelApplyInfo(string bNum)
    ���	  : ���� ���� ����
    ���� ���� : ����
    ��ȯ��    : Boolean
*/
bool ApplyCollection::deleteCancelApplyInfo(string bNum)
{
    for (auto x = ownedApplyList.begin(); x != ownedApplyList.end(); ++x)
    {
        if (x->second.getBusinessNum() == bNum)
        {
            x->second.~ApplyInfo();
            ownedApplyList.erase(x);
            return true;  // ���� ����
        }
    }

    // ���� ������ ã�� ���Ͽ� ���� ����
    return false;
}


/*
    �Լ� �̸� : ApplyCollection::getApplyStats()
    ���	  : ������ ��� ���� ������ ���� ���� ������ ���� Ƚ���� ���(���� ���� ���)
    ���� ���� : ����
    ��ȯ��    : Boolean
*/
bool ApplyCollection::getApplyStats()
{
    // ������ ���� Ƚ�� ����
    map<string, int> applyStats;    // key: ����, value: ���� Ƚ��

    for (const auto& apply : ownedApplyList)
    {
        string pos = apply.second.getPosition();

        // �̹� ��ϵ� ����
        if (applyStats.count(pos) > 0)
        {
            applyStats[pos]++;
        }
        // ���ο� ����
        else
        {
            applyStats[pos] = 1;
        }
    }

    // ������ ���� Ƚ���� ���
    if (applyStats.empty())
    {
        return false;
    }
    else
    {
        for (const auto& stats : applyStats)
        {
            cout << stats.first << " " << stats.second << endl;
        }
        return true;
    }
}

/*
    �Լ� �̸� : ApplyCollection::addApplyList(ApplyInfo)
    ���	  :
    ���� ���� : ����
    ��ȯ��    : ����
*/
// bool ApplyCollection::addApplyList(ApplyInfo) { }