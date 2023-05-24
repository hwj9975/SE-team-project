#include "ApplyInfoCollection.h"

ApplyInfoCollection* ApplyInfoCollection::instance = nullptr;
/**
 * singleton 객체 생성 및 반환
*/
ApplyInfoCollection* ApplyInfoCollection::getInstance() {
     if (instance == nullptr) {
        instance = new ApplyInfoCollection();
    }

    return instance;
}

/**
 * 지원 정보를 바탕으로 applyInfoList에 지원정보 저장.
*/
void ApplyInfoCollection::addApplyInfo(ApplyInfo* applyInfo) {
    applyInfoList.push_back(std::pair<std::string, ApplyInfo*>(applyInfo->getApplicantName(), applyInfo)); // 지원자 이름, 지원정보 저장.
}