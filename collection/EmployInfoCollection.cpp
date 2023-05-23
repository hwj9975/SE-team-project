#include <EmployInfoCollection.h>

/**
 * singleton 객체 생성 및 반환.
*/
EmployInfoCollection* EmployInfoCollection::getInstance() {
    if (instance == nullptr) {
        instance = new EmployInfoCollection();
    }

    return instance;
}

/**
 * 회사 이름을 기반으로 등록된 채용정보 검색
*/
std::vector<EmployInfo> EmployInfoCollection::getEmployInfo(std::string companyName) {
    std::vector<EmployInfo> v; 
    for (std::pair<std::string, EmployInfo*> vals: employInfoList) { // 등록된 모든 채용정보 순회
        if (vals.second->getCompanyName() == companyName) { // 회사이름과 일치하는 채용정보
            EmployInfo info = *vals.second; 
            v.push_back(info); // 반환할 채용정보에 추가
        }
    }

    return v;
}

/**
 * 사업자 번호를 기반으로 등록된 채용정보 검색
*/
EmployInfo EmployInfoCollection::getEmployInfoByBusinessNum(std::string businessNum) {
    for (std::pair<std::string, EmployInfo*> vals: employInfoList) { // 등록된 모둔 채용정보 순회
        if (vals.second->getBusinessNum() == businessNum) { // 사업자번호와 일치하는 채용정보
            EmployInfo info = *vals.second;
            return info;
        }
    }
}

/**
 * 통계 계산 위한 지원자 발생시 총 지원인원 증가.
*/
bool EmployInfoCollection::addApplyCount(std::string companyName) {
    for (std::pair<std::string, EmployInfo*> vals: employInfoList) { // 등록된 모둔 채용정보 순회
        if (vals.second->getCompanyName() == companyName) { // 등록한 회사 이름과 일치하는 채용정보
            EmployInfo* info = vals.second;
            info->increaseCurrentappliedapplicantsNum(); // 지원자수 증가
        }
    }
}

bool EmployInfoCollection::getEmployStats() {
    
}