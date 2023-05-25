#include <string>

#include "CancelApplyInfoControl.h"
#include "ApplyCollection.h"
#include "SessionCollection.h"

/*
	�Լ� �̸� : CancelApplyInfoControl::cancelApplyInfo(string bNum)
	���	  : �Ϲ� ȸ���� ���� ���� ����
	���� ���� : ����
	��ȯ��    : Boolean
*/
bool CancelApplyInfoControl::cancelApplyInfo(string bNum)
{
	// Session

    ApplyCollection applyCollection;

	// ���� ���� ����
	// ���� ������ ��쿡 true, �Ұ����� ��쿡 false ��ȯ
    return applyCollection.deleteCancelApplyInfo(bNum);
}