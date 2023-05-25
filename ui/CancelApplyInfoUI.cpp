#include <string>
#include "CancelApplyInfoUI.h"
#include "CancelApplyInfoControl.h"
#include "ApplyInfoCollection.h"
#include "EmployInfoCollection.h"

/*
	�Լ� �̸� : CancelApplyInfoUI::cancelApplyInfoUI(string bNum)
	���	  : �Ϲ� ȸ���� ���� ���� ������ ���� UI ����
	���� ���� : ����
	��ȯ��    : Boolean
*/
//bool CancelApplyInfoUI::cancelApplyInfoUI(string bNum)
//{
//    CancelApplyInfoControl cancelApplyInfo;
//
//    cout << "[���� ���� ����]" << endl;
//    bool result = cancelApplyInfo.cancelApplyInfo(bNum);
//
//    if (result) {   cout << "�ش� ���� ������ ��ҵǾ����ϴ�." << endl;   }
//    else {  cout << "����� ���� ������ ã�� �� �����ϴ�." << endl;    }
//
//    return result;
//}

CancelApplyInfoUI::CancelApplyInfoUI(ApplyInfoCollection* applyInfoCollection)
    : cancelApplyInfoControl(applyInfoCollection){}

string CancelApplyInfoUI::cancelApplyInfoUI(string companyNum) {
    cancelApplyInfoControl.cancelApplyInfo(companyNum);
    EmployInfoCollection *instance = EmployInfoCollection::getInstance();
    EmployInfo info = instance->getEmployInfoByBusinessNum(companyNum);
    
    string ret = "" + info.getCompanyName() + " " + info.getBusinessNum() + " " + info.getPosition();

    return ret;
}