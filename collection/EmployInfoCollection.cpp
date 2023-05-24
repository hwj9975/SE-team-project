#include "EmployInfoCollection.h"

EmployInfoCollection* EmployInfoCollection::instance = nullptr;

/**
 * 함수 이름 : getInstance
 * 기능    : singleton 객체 생성 및 반환.
 * 전달 인자: null
 * 반환값  : EmployInfoCollection*
 */
EmployInfoCollection* EmployInfoCollection::getInstance() {
    if (instance == nullptr) {
        instance = new EmployInfoCollection();
    }

    return instance;
}

/**
 * 함수 이름 : getEmployInfo
 * 기능    : 회사 이름을 기반으로 등록된 채용정보 검색
 * 전달 인자: string
 * 반환값  : vector<EmployInfo>
 */
vector<EmployInfo> EmployInfoCollection::getEmployInfo(string companyName) {
    vector<EmployInfo> v;
    for (pair<string, EmployInfo*> vals: employInfoList) { // 등록된 모든 채용정보 순회
        if (vals.second->getCompanyName() == companyName) { // 회사이름과 일치하는 채용정보
            EmployInfo info = *vals.second; 
            v.push_back(info); // 반환할 채용정보에 추가
        }
    }

    return v;
}

/**
 * 함수 이름 : getEmployInfoByBusinessNum
 * 기능    : 사업자 번호를 기반으로 등록된 채용정보 검색
 * 전달 인자: string
 * 반환값  : EmployInfo
 */
EmployInfo EmployInfoCollection::getEmployInfoByBusinessNum(string businessNum) {
    EmployInfo info;
    for (std::pair<std::string, EmployInfo*> vals: employInfoList) { // 등록된 모둔 채용정보 순회
        if (vals.second->getBusinessNum() == businessNum) { // 사업자번호와 일치하는 채용정보
            info = *vals.second;
            return info;
        }
    }
    return info;
}

/**
 * 함수 이름 : addApplyCount
 * 기능    : 통계 계산 위한 지원자 발생시 총 지원인원 증가.
 * 전달 인자: string
 * 반환값  : null
 */
void EmployInfoCollection::addApplyCount(string companyName) {
    for (pair<string, EmployInfo*> vals: employInfoList) { // 등록된 모둔 채용정보 순회
        if (vals.second->getCompanyName() == companyName) { // 등록한 회사 이름과 일치하는 채용정보
            EmployInfo* info = vals.second;
            info->increaseCurrentAppliedApplicantsNum(); // 지원자수 증가
        }
    }
}

bool EmployInfoCollection::getEmployStats() {
    return false;
}