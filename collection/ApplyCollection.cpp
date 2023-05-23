#include <string>
#include <algorithm>
#include <map>

#include "ApplyCollection.h"
#include "ApplyInfo.h"

/*
    함수 이름 : ApplyCollection::getApplyInfo()
    기능	  : 지원 정보를 회사 이름을 기준으로 정렬하여 전부 출력
    전달 인자 : 없음
    반환값    : Boolean
*/
bool ApplyCollection::getApplyInfo() {
    
    // 회사 이름 기준으로 정렬
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
    함수 이름 : ApplyCollection::deleteCancelApplyInfo(string bNum)
    기능	  : 지원 정보 삭제
    전달 인자 : 없음
    반환값    : Boolean
*/
bool ApplyCollection::deleteCancelApplyInfo(string bNum)
{
    for (auto x = ownedApplyList.begin(); x != ownedApplyList.end(); ++x)
    {
        if (x->second.getBusinessNum() == bNum)
        {
            x->second.~ApplyInfo();
            ownedApplyList.erase(x);
            return true;  // 삭제 성공
        }
    }

    // 지원 정보를 찾지 못하여 삭제 실패
    return false;
}


/*
    함수 이름 : ApplyCollection::getApplyStats()
    기능	  : 지원한 모든 지원 정보에 대해 지원 업무별 지원 횟수를 출력(지원 정보 통계)
    전달 인자 : 없음
    반환값    : Boolean
*/
bool ApplyCollection::getApplyStats()
{
    // 업무별 지원 횟수 저장
    map<string, int> applyStats;    // key: 업무, value: 지원 횟수

    for (const auto& apply : ownedApplyList)
    {
        string pos = apply.second.getPosition();

        // 이미 등록된 업무
        if (applyStats.count(pos) > 0)
        {
            applyStats[pos]++;
        }
        // 새로운 업무
        else
        {
            applyStats[pos] = 1;
        }
    }

    // 업무별 지원 횟수를 출력
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
    함수 이름 : ApplyCollection::addApplyList(ApplyInfo)
    기능	  :
    전달 인자 : 없음
    반환값    : 없음
*/
// bool ApplyCollection::addApplyList(ApplyInfo) { }