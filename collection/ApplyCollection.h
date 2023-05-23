#include <iostream>
#include <vector>

#include "ApplyInfo.h"

using namespace std;

class ApplyCollection
{
private:
    vector<pair<string, ApplyInfo>> ownedApplyList;

public:
    bool getApplyInfo();
    bool deleteCancelApplyInfo(string);
    bool getApplyStats();
    bool addApplyList(ApplyInfo);   // 제 파트가 아니라...
};