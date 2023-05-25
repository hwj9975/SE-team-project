#pragma once
#ifndef APPLYINFOCOLLECTION_H
#define APPLYINFOCOLLECTION_H

#include <vector>
#include <map>
#include "ApplyInfo.h"
using namespace std;

class ApplyInfoCollection
{
private:
    vector<pair<string, ApplyInfo*>> applyInfoList; // 지원자 이름, 지원정보

    static ApplyInfoCollection* instance; //singleton instance

    ApplyInfoCollection() {}
    ApplyInfoCollection(const ApplyInfoCollection& other) {}

public:
    static ApplyInfoCollection* getInstance(); // singleton instance 반환
    void addApplyInfo(ApplyInfo* applyInfo); // 지원정보 저장.
    vector<ApplyInfo> getApplyInfo();
    void deleteCancelApplyInfo(string businessNumber);
    map<string, int> getApplyStats();
};

#endif
