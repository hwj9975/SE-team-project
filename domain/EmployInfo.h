#pragma once
#include <iostream>

#include "ApplyCollection.h"

using namespace std;

class EmployInfo
{
private:
    string companyName; // ȸ�� �̸�      // not null
    string businessNum; // ����ڹ�ȣ     // not null
    string position;    // ����           // not null
    int applicantsNum;  // ä�� �ο�      // not null // <-- �� �³�?? ���� �ǹ̷� �� �ǰ���?
    string finishDate;  // ������         // not null
    int currentappliedapplicantsNum;
    ApplyCollection ownedApplyInfoCollection;


public:
    EmployInfo() {};     // �⺻ ������?
    EmployInfo(string, string, string, int, string);
    string getCompanyName() const;
    string getBusinessNum() const;
    string getPosition() const;
    int getApplicantsNum() const;
    string getFinishDate() const;
    void increaseCurrentappliedapplicantsNum();
};
