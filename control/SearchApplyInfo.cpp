#include <string>

#include "SearchApplyInfo.h"
#include "ApplyCollection.h"
#include "SessionCollection.h"

/*
	�Լ� �̸� : SearchApplyInfo::showApplyInfo()
	���	  : �Ϲ� ȸ���� ���� ���� ��ȸ
	���� ���� : ����
	��ȯ��    : Boolean
*/
bool SearchApplyInfo::showApplyInfo()
{
	// Session

    ApplyCollection applyCollection;

	// ���� ���� ��ȸ
	// ��ȸ ������ ��쿡 true, �Ұ����� ��쿡 false ��ȯ
    return applyCollection.getApplyInfo();
}