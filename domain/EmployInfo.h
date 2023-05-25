#pragma once
#include "ApplyInfoCollection.h"
#include <string>
using namespace std;

class EmployInfo
{
private:
    string companyName; // ȸ�� �̸�      // not null
    string businessNum; // ����ڹ�ȣ     // not null
    string position;    // ����           // not null
    int applicantsNum;  // ä�� �ο�      // not null // <-- �� �³�?? ���� �ǹ̷� �� �ǰ���?
    string finishDate;  // ������         // not null
    int currentAppliedApplicantsNum;


public:
    EmployInfo(string position, int applicantsNum, string finishDate); // 생성자
    EmployInfo();
    EmployInfo(string companyName, string businessNum, string position, int applicantsNum, string finishDate);
    string getCompanyName() const;
    string getBusinessNum() const;
    string getPosition() const;
    int getApplicantsNum() const;
    string getFinishDate() const;
    void increaseCurrentAppliedApplicantsNum();
    int getCurrentAppliedApplicantsNum();
};
