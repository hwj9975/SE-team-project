#ifndef EMPLOYINFOCOLLECTION_H
#define EMPLOYINFOCOLLECTION_H

#include <vector>
#include "EmployInfo.h"

class EmployInfoCollection
{
private:
    std::vector<std::pair<std::string, EmployInfo*>> employInfoList; // 회사 이름, 회사 채용정보

    static EmployInfoCollection* instance;

    EmployInfoCollection() {}
    EmployInfoCollection(const EmployInfoCollection& other) {}

public:
    static EmployInfoCollection* getInstance(); // singleton 객체 instance 반환.
    std::vector<EmployInfo> getEmployInfo(std::string companyName); // 회사 이름기반 채용정보 반환.
    EmployInfo getEmployInfoByBusinessNum(std::string businessNum); // 사업자번호 기반 채용정보 반환.
    void addApplyCount(std::string companyName); // 지원자수 추가.
    bool getEmployStats();
};

#endif
