#ifndef APPLYINFOCOLLECTION_H
#define APPLYINFOCOLLECTION_H

#include <vector>
#include <ApplyInfo.h>

class ApplyInfoCollection
{
private:
    std::vector<std::pair<std::string, ApplyInfo*>> applyInfoList; // 지원자 이름, 지원정보

    static ApplyInfoCollection* instance; //singleton instance

    ApplyInfoCollection() {}
    ApplyInfoCollection(const ApplyInfoCollection& other) {}

public:
    static ApplyInfoCollection* getInstance(); // singleton instance 반환
    bool addApplyInfo(ApplyInfo* applyInfo); // 지원정보 저장.
};

#endif
