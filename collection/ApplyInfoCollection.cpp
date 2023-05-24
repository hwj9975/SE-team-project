#include "ApplyInfoCollection.h"

ApplyInfoCollection* ApplyInfoCollection::instance = nullptr;

/**
 * 함수 이름 : getInstance
 * 기능    : singleton 객체 생성 및 반환
 * 전달 인자: null
 * 반환값  : ApplyInfoCollection*
 */
ApplyInfoCollection* ApplyInfoCollection::getInstance() {
     if (instance == nullptr) {
        instance = new ApplyInfoCollection();
    }

    return instance;
}

/**
 * 함수 이름 : addApplyInfo
 * 기능    : 지원 정보를 바탕으로 applyInfoList에 지원정보 저장.
 * 전달 인자: ApplyInfo*
 * 반환값  : null
 */
void ApplyInfoCollection::addApplyInfo(ApplyInfo* applyInfo) {
    applyInfoList.push_back(pair<string, ApplyInfo*>(applyInfo->getApplicantName(), applyInfo)); // 지원자 이름, 지원정보 저장.
}