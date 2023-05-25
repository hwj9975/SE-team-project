#include "EmployInfoCollection.h"
#include "EmployInfo.h"
#include "CompanyAccount.h"
#include "SessionCollection.h"
#include "string"

using namespace std;


/**
 * 함수 이름 : AddEmployInfo
 * 기능    : ownedEmployList에 새로운 채용정보 추가
 * 전달 인자: null
 * 반환값  : 없음
 */
void EmployInfoCollection::addEmployInfo(string position, int applicantsNum, string finishDate)
{

    SessionCollection* collection = SessionCollection::getInstance();
    CompanyAccount *account = static_cast<CompanyAccount *> (collection->getSession()->getAccount());

    string name = account->getName();
    string bussinessNum = account->getBusinessNumber();
    
    EmployInfo* newEmployInfo = new EmployInfo(name, bussinessNum, position, applicantsNum, finishDate);
    ownedEmployList.push_back(newEmployInfo); // 리스트에 추가
}

/**
 * 함수 이름 : GetListEmployInfo
 * 기능    : 채용정보리스트 반환
 * 전달 인자: null
 * 반환값  : vector <EmployInfo*> ownedEmployList반환
 */
vector <EmployInfo*> EmployInfoCollection::getListEmployInfo()
{
    return this->ownedEmployList; // 리턴 타입은 vector <EmployInfo*> 타입이다
}


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

map<string, int> EmployInfoCollection::getEmployStats() {
    map<string, int> applyStats;
    SessionCollection* collection = SessionCollection::getInstance();
    Session* session = collection->getSession();
    string companyName = session->getAccount()->getName();

    for (const auto& apply: employInfoList) {
        string pos = apply.second->getPosition();
        vector<EmployInfo> val = this->getEmployInfo(companyName);

        applyStats[pos] = val.at(0).getCurrentAppliedApplicantsNum();
    }

    return applyStats;
}