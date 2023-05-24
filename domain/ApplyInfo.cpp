#include <string>
#include "ApplyInfo.h"

/*
	�Լ� �̸� : ApplyInfo::ApplyInfo(string cNum, string bNum, string pos, int eNum, string finDate)
	���	  : Constructor
	���� ���� : ����
	��ȯ��    : ����
*/
ApplyInfo::ApplyInfo(string cNum, string bNum, string pos, int eNum, string finDate, string applycantName)
	:companyName(cNum), businessNum(bNum), position(pos), employedNum(eNum), finishDate(finDate), applicantName(applicantName)
{

}


/*
	�Լ� �̸� : ApplyInfo::getCompanyName()
	���	  : ȸ��� ��ȯ
	���� ���� : ����
	��ȯ��    : companyName
*/
string ApplyInfo::getCompanyName() const { return companyName; }


/*
	�Լ� �̸� : ApplyInfo::getBusinessNum()
	���	  : ����ڹ�ȣ ��ȯ
	���� ���� : ����
	��ȯ��    : businessNum
*/
string ApplyInfo::getBusinessNum() const { return businessNum; }


/*
	�Լ� �̸� : ApplyInfo::getPosition()
	���	  : ���� ��ȯ
	���� ���� : ����
	��ȯ��    : position
*/
string ApplyInfo::getPosition() const { return position; }


/*
	�Լ� �̸� : ApplyInfo::getEmployedNum()
	���	  : ä�� �ο� ��ȯ
	���� ���� : ����
	��ȯ��    : employedNum
*/
int ApplyInfo::getEmployedNum() const { return employedNum; }


/*
	�Լ� �̸� : ApplyInfo::getFinishDate()
	���	  : ������ ��ȯ
	���� ���� : ����
	��ȯ��    : finishDate
*/
string ApplyInfo::getFinishDate() const { return finishDate; }

/*
	�Լ� �̸� : ApplyInfo::~ApplyInfo()
	���	  : Destructor
	���� ���� : ����
	��ȯ��    : ����
*/
ApplyInfo::~ApplyInfo()
{
	
}

string ApplyInfo::getApplicantName() const { return applicantName; }