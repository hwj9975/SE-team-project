#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <tuple>
#include <fstream>

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

ifstream inputFile(INPUT_FILE_NAME);   // input.txt 를 읽기모드로 열음
ofstream outputFile(OUTPUT_FILE_NAME); // output.txt 를 쓰기모드로 열음

//채용정보 등록 컨트롤
class RegisterEmployInfo
{
private:

public:
    RegisterEmployInfo();
    void AddNewEmployInfo(string position, int applicantsNum, string finishDate);
};

//채용정보등록 바운더리
class RegisterEmployInfoUI
{
private:

public:
    void CreateNewEmployInfo(RegisterEmployInfo* RegisterEmployInfo);
};

//채용정보조회 컨트롤
class ViewEmployInfo
{
private:

public:
    ViewEmployInfo();
    void ShowEmployInfo();

};

//채용정보조회 바운더리
class ViewEmployInfoUI
{
private:

public:
    void RequestEmployInfo(ViewEmployInfo* viewEmployInfo);
};

//채용정보등록 바운더리에서 사용자가 채용정보생성 함수
void RegisterEmployInfoUI::CreateNewEmployInfo(RegisterEmployInfo* RegisterEmployInfo)
{
    string position, finishDate;
    int applicantsNum;

    inputFile >> position >> applicantsNum >> finishDate;   // 

    RegisterEmployInfo->AddNewEmployInfo(position, applicantsNum, finishDate); // 
}

//채용정보 클래스
class EmployInfo
{
private:
    string companyName; // 
    string position; // 
    string finishDate; // 
    int businessNum; // 
    int applicantsNum; 
    int currentAppliedApplicantsNum; // 

public:
    EmployInfo(string position, int applicantsNum, string finishDate); // 생성자
    string GetPosition() { return position; } // 
    string GetFinishDate() { return finishDate; } // 
    string GetCompanyName() { return companyName; }   // 
    int GetApplicantsNum() { return applicantsNum; } // 
    int GetBusinessNum() { return businessNum; }  // 

    void IncreaseCurAppliedApplicantsNum(int applicantsNum);  
};

//채용정보 콜렉션
class EmployInfoCollection 
{
private:

    vector <EmployInfo*> ownedEmployList;    // 
    
public:
    void AddEmployInfo(string position, int applicantsNum, string finishDate);
};

//전역으로 collection 생성
EmployInfoCollection* employInfoCollection;  

//RegisterEmployInfo 채용정보등록 생성자 함수
RegisterEmployInfo::RegisterEmployInfo()
{

    RegisterEmployInfoUI* registerEmployInfoUI = new RegisterEmployInfoUI;

    registerEmployInfoUI->CreateNewEmployInfo(this);

}

//콜렉션 AddEmployInfo 채용정보 추가 함수
void EmployInfoCollection::AddEmployInfo(string position, int applicantsNum, string finishDate)
{
    EmployInfo* newEmployInfo = new EmployInfo(position, applicantsNum, finishDate); // 받은 정보로 채용정보 객체를 생성한다
}

//RegisterEmployInfo의 AddNewEmployInfo 함수, 채용정보등록 컨트롤의 채용정보 추가 함수
void RegisterEmployInfo::AddNewEmployInfo(string position, int applicantsNum, string finishDate)
{
    employInfoCollection->AddEmployInfo(position, applicantsNum, finishDate);  //새 채용정보을 등록하는 함수를 호출한다
}

void ViewEmployInfoUI::RequestEmployInfo(ViewEmployInfo* viewEmployInfo)
{
    viewEmployInfo->ShowEmployInfo();
}


