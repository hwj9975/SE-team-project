#include <string>

#include "CancelApplyInfo.h"
#include "ApplyCollection.h"
#include "SessionCollection.h"

/*
	�Լ� �̸� : CancelApplyInfo::cancelApplyInfo(string bNum)
	���	  : �Ϲ� ȸ���� ���� ���� ����
	���� ���� : ����
	��ȯ��    : Boolean
*/
bool CancelApplyInfo::cancelApplyInfo(string bNum)
{
	// Session

    ApplyCollection applyCollection;

	// ���� ���� ����
	// ���� ������ ��쿡 true, �Ұ����� ��쿡 false ��ȯ
    return applyCollection.deleteCancelApplyInfo(bNum);
}