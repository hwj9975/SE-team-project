#include <string>
#include "ApplyInfo.h"

/*
	함수 이름 : ApplyInfo::ApplyInfo(string cNum, string bNum, string pos, int eNum, string finDate)
	기능	  : Constructor
	전달 인자 : 없음
	반환값    : 없음
*/
ApplyInfo::ApplyInfo(string cNum, string bNum, string pos, int eNum, string finDate)
	:companyName(cNum), businessNum(bNum), position(pos), employedNum(eNum), finishDate(finDate)
{

}


/*
	함수 이름 : ApplyInfo::getCompanyName()
	기능	  : 회사명 반환
	전달 인자 : 없음
	반환값    : companyName
*/
string ApplyInfo::getCompanyName() const { return companyName; }


/*
	함수 이름 : ApplyInfo::getBusinessNum()
	기능	  : 사업자번호 반환
	전달 인자 : 없음
	반환값    : businessNum
*/
string ApplyInfo::getBusinessNum() const { return businessNum; }


/*
	함수 이름 : ApplyInfo::getPosition()
	기능	  : 업무 반환
	전달 인자 : 없음
	반환값    : position
*/
string ApplyInfo::getPosition() const { return position; }


/*
	함수 이름 : ApplyInfo::getEmployedNum()
	기능	  : 채용 인원 반환
	전달 인자 : 없음
	반환값    : employedNum
*/
int ApplyInfo::getEmployedNum() const { return employedNum; }


/*
	함수 이름 : ApplyInfo::getFinishDate()
	기능	  : 마감일 반환
	전달 인자 : 없음
	반환값    : finishDate
*/
string ApplyInfo::getFinishDate() const { return finishDate; }

/*
	함수 이름 : ApplyInfo::~ApplyInfo()
	기능	  : Destructor
	전달 인자 : 없음
	반환값    : 없음
*/
ApplyInfo::~ApplyInfo()
{
	
}