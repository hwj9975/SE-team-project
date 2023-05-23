#include <ApplyInfoCollection.h>

ApplyInfoCollection* ApplyInfoCollection::getInstance() {
     if (instance == nullptr) {
        instance = new ApplyInfoCollection();
    }

    return instance;
}

bool ApplyInfoCollection::addApplyInfo(ApplyInfo* applyInfo) {
    applyInfoList.push_back(std::pair<std::string, ApplyInfo*>(applyInfo->getApplicantName(), applyInfo));
}