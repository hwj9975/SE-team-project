#include <EmployInfoCollection.h>

EmployInfoCollection* EmployInfoCollection::getInstance() {
    if (instance == nullptr) {
        instance = new EmployInfoCollection();
    }

    return instance;
}

std::vector<EmployInfo> EmployInfoCollection::getEmployInfo(std::string companyName) {
    std::vector<EmployInfo> v;
    for (std::pair<std::string, EmployInfo*> vals: employInfoList) {
        if (vals.second->getCompanyName() == companyName) {
            EmployInfo info = *vals.second;
            v.push_back(info);
        }
    }

    return v;
}

EmployInfo EmployInfoCollection::getEmployInfoByBusinessNum(std::string businessNum) {
    for (std::pair<std::string, EmployInfo*> vals: employInfoList) {
        if (vals.second->getBusinessNum() == businessNum) {
            EmployInfo info = *vals.second;
            return info;
        }
    }
}

bool EmployInfoCollection::addApplyCount(std::string companyName) {
    for (std::pair<std::string, EmployInfo*> vals: employInfoList) {
        if (vals.second->getCompanyName() == companyName) {
            EmployInfo* info = vals.second;
            info->increaseCurrentappliedapplicantsNum();
        }
    }
}

bool EmployInfoCollection::getEmployStats() {
    
}