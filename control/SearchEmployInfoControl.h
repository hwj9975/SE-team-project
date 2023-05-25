#ifndef SEARCHEMPLOYINFOCONTROL_H
#define SEARCHEMPLOYINFOCONTROL_H

#include <string>
#include <vector>
#include "EmployInfoCollection.h"

using namespace std;

class SearchEmployInfoControl
{
private:
    EmployInfoCollection* employInfoCollection; //singleton
public:
    /**
    * 함수 이름 : SearchEmployInfoControl
    * 기능    : singleton인 EmployInfoCollection 생성자 주입.
    * 전달 인자: EmployInfoCollection*
    * 반환값  : null
    */
    SearchEmployInfoControl(EmployInfoCollection* employInfoCollection) {
        this->employInfoCollection = employInfoCollection;
    }

    /**
    * 함수 이름 : searchEmployInfo
    * 기능    : 회사 이름을 기반으로 등록된 채용정보 검색.
    * 전달 인자: string
    * 반환값  : vector<EmployInfo>
    */
    vector<EmployInfo> searchEmployInfo(string companyName){
        vector<EmployInfo> v =  employInfoCollection->getEmployInfo(companyName);

        return v;
    }
};

#endif
