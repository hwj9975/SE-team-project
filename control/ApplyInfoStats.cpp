#include <string>

#include "ApplyInfoStats.h"
#include "ApplyCollection.h"
#include "SessionCollection.h"

/*
	�Լ� �̸� : ApplyInfoStats::showEmployInfoStats()
	���	  : �Ϲ� ȸ���� ���� ���� ��� ���
	���� ���� : ����
	��ȯ��    : Boolean
*/
bool ApplyInfoStats::showApplyInfoStats()
{
	// Session

    ApplyCollection applyCollection;

	// ���� ���� ��� ��ȸ
	// ��ȸ ������ ��쿡 true, �Ұ����� ��쿡 false ��ȯ
	return applyCollection.getApplyStats();
}