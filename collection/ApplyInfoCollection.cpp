#include "ApplyInfoCollection.h"
#include "SessionCollection.h"
#include "GeneralAccount.h"

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

vector<ApplyInfo> ApplyInfoCollection::getApplyInfo() {
    SessionCollection *instance = SessionCollection::getInstance();
    GeneralAccount *account = static_cast<GeneralAccount *> (instance->getSession()->getAccount());
    string accountName = account->getName();

    vector<ApplyInfo> ret;
    for (pair<string, ApplyInfo*> v:applyInfoList ) {
        if (v.first == accountName) {
            ret.push_back(*v.second);
        }
    }

    return ret;
}

void ApplyInfoCollection::deleteCancelApplyInfo(string businessNumber) {
    SessionCollection *instance = SessionCollection::getInstance();
    GeneralAccount *account = static_cast<GeneralAccount *> (instance->getSession()->getAccount());
    string accountName = account->getName();

    for (auto x = applyInfoList.begin(); x != applyInfoList.end(); ++x) {
        if (x->second->getBusinessNum() == businessNumber) {
            applyInfoList.erase(x);
        }
    }

}

map<string, int> ApplyInfoCollection::getApplyStats() {
    map<string, int> applyStats;

    for (const auto& apply: applyInfoList) {
        string pos = apply.second->getPosition();
        applyStats[pos]++;
    }

    return applyStats;
}