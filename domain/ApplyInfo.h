#include <iostream>

using namespace std;

class ApplyInfo
{
private:
    string companyName; // 회사 이름      // not null
    string businessNum; // 사업자번호     // not null
    string position;    // 업무           // not null
    int employedNum;    // 채용 인원      // not null
    string finishDate;  // 마감일         // not null

public:
    ApplyInfo() {};     // 기본 생성자?
    ApplyInfo(string, string, string , int , string);
    string getCompanyName() const;
    string getBusinessNum() const;
    string getPosition() const;
    int getEmployedNum() const;
    string getFinishDate() const;
    ~ApplyInfo();
};