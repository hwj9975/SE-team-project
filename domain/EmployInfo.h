#include <iostream>

#include "ApplyCollection.h"

using namespace std;


class EmployInfo
{
private:
    string companyName; // 
    string position; // 
    string finishDate; // 
    string businessNum; // 
    int applicantsNum; 
    int currentAppliedApplicantsNum; // 
    ApplyCollection ownedApplyInfoCollection;

public:
    EmployInfo(string position, int applicantsNum, string finishDate); // 생성자
    string GetPosition() { return position; } // 
    string GetFinishDate() { return finishDate; } // 
    string GetCompanyName() { return companyName; }   // 
    int GetApplicantsNum() { return applicantsNum; } // 
    string GetBusinessNum() { return businessNum; }  // 

    void IncreaseCurAppliedApplicantsNum(int applicantsNum);

    ~EmployInfo();  
};