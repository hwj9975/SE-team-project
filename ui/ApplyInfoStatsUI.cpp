#include <string>

#include "ApplyInfoStatsUI.h"
#include "ApplyInfoStats.h"

/*
	�Լ� �̸� : ApplyInfoStatsUI::selectEmployInfoStats()
	���	  : �Ϲ� ȸ���� ���� ���� ��� ����� ���� UI ����
	���� ���� : ����
	��ȯ��    : Boolean
*/
bool ApplyInfoStatsUI::selectApplyInfoStats()
{
	ApplyInfoStats applyInfoStats;

	cout << "[���� ���� ���]" << endl;
    bool result = applyInfoStats.showApplyInfoStats();

    if (result) {   cout << "���� ���� ��踦 ��ȸ�մϴ�." << endl; }
	else { cout << "��ȸ�� ���� ������ �����ϴ�." << endl; }

    return result;
}