#include <string>
#include "CancelApplyInfoUI.h"
#include "CancelApplyInfo.h"

/*
	�Լ� �̸� : CancelApplyInfoUI::cancelApplyInfoUI(string bNum)
	���	  : �Ϲ� ȸ���� ���� ���� ������ ���� UI ����
	���� ���� : ����
	��ȯ��    : Boolean
*/
bool CancelApplyInfoUI::cancelApplyInfoUI(string bNum)
{
    CancelApplyInfo cancelApplyInfo;

    cout << "[���� ���� ����]" << endl;
    bool result = cancelApplyInfo.cancelApplyInfo(bNum);

    if (result) {   cout << "�ش� ���� ������ ��ҵǾ����ϴ�." << endl;   }
    else {  cout << "����� ���� ������ ã�� �� �����ϴ�." << endl;    }

    return result;
}