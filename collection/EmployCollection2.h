#ifndef EMPLOY_COLLECTION_H
#define EMPLOY_COLLECTION_H

#include <vector>
#include "EmployInfo.h"

using namespace std;

class EmployInfoCollection 
{
private:
    vector<EmployInfo*> ownedEmployList;
    
public:
    void AddEmployInfo(string position, int applicantsNum, string finishDate);
    vector <EmployInfo*> GetListEmployInfo();
};

extern EmployInfoCollection* employInfoCollection; // 전역으로 설정한 employInfoCollection 인스턴스 선언

#endif
