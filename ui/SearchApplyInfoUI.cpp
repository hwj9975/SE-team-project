#include <string>
#include "SearchApplyInfoUI.h"
#include "SearchApplyInfo.h"

/*
	�Լ� �̸� : SearchApplyInfoUI::searchApplyInfo()
	���	  : �Ϲ� ȸ���� ���� ���� ��ȸ�� ���� UI ����
	���� ���� : ����
	��ȯ��    : Boolean
*/
bool SearchApplyInfoUI::searchApplyInfo()
{
	SearchApplyInfo searchApplyInfo;

	cout << "[���� ���� ��ȸ]" << endl;
	bool result = searchApplyInfo.showApplyInfo();

	if (result)	{	cout << "���� ������ ��ȸ�մϴ�." << endl;	}
	else {	cout << "���� ������ ��ȸ�� �� �����ϴ�." << endl;	}

	return result;
}