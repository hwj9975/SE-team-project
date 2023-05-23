#ifndef EMPLOYINFOCOLLECTION_H
#define EMPLOYINFOCOLLECTION_H

#include <vector>
#include <EmployInfo.h>

class EmployInfoCollection
{
private:
    std::vector<std::pair<std::string, EmployInfo*>> employInfoList;

    static EmployInfoCollection* instance;

    EmployInfoCollection() {}
    EmployInfoCollection(const EmployInfoCollection& other) {}

public:
    static EmployInfoCollection* getInstance();
    std::vector<EmployInfo> getEmployInfo(std::string companyName);
    EmployInfo getEmployInfoByBusinessNum(std::string businessNum);
    bool addApplyCount(std::string companyName);
    bool getEmployStats();
};

#endif
