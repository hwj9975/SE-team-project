#ifndef SEARCHEMPLOYINFOCONTROL_H
#define SEARCHEMPLOYINFOCONTROL_H

#include <string>
#include <vector>
#include "EmployInfoCollection.h"

class SearchEmployInfoControl
{
private:
    EmployInfoCollection* employInfoCollection; //singleton
public:
    /**
     * singleton인 EmployInfoCollection 생성자 주입.
    */
    SearchEmployInfoControl(EmployInfoCollection* employInfoCollection) {
        this->employInfoCollection = employInfoCollection;
    }

    /**
     * 회사 이름을 기반으로 등록된 채용정보 검색.
    */
    std::vector<EmployInfo> searchEmployInfo(std::string companyName){
        std::vector<EmployInfo> v =  employInfoCollection->getEmployInfo(companyName);

        return v;
    }
};

#endif
