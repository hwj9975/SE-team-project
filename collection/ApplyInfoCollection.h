#ifndef APPLYINFOCOLLECTION_H
#define APPLYINFOCOLLECTION_H

#include <vector>
#include <ApplyInfo.h>

class ApplyInfoCollection
{
private:
    std::vector<std::pair<std::string, ApplyInfo*>> applyInfoList;

    static ApplyInfoCollection* instance;

    ApplyInfoCollection() {}
    ApplyInfoCollection(const ApplyInfoCollection& other) {}

public:
    static ApplyInfoCollection* getInstance();
    bool addApplyInfo(ApplyInfo* applyInfo);
};

#endif
