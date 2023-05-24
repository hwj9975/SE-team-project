#include <iostream>

#include "ApplyCollection.h"

using namespace std;

class EmployInfo
{
private:
    string companyName; // 회사 이름      // not null
    string businessNum; // 사업자번호     // not null
    string position;    // 업무           // not null
    int applicantsNum;  // 채용 인원      // not null // <-- 엥 맞나?? 같은 의미로 쓴 건가요?
    string finishDate;  // 마감일         // not null
    int currentappliedapplicantsNum;
    ApplyCollection ownedApplyInfoCollection;


public:
    EmployInfo() {};     // 기본 생성자?
    EmployInfo(string, string, string, int, string);
    string getCompanyName() const;
    string getBusinessNum() const;
    string getPosition() const;
    int getApplicantsNum() const;
    string getFinishDate() const;
    void increaseCurrentappliedapplicantsNum();

    ~EmployInfo();
};
