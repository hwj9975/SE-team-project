#include <string>

#include "ApplyInfoStatsUI.h"
#include "ApplyInfoStatsControl.h"

/*
	�Լ� �̸� : ApplyInfoStatsUI::selectEmployInfoStats()
	���	  : �Ϲ� ȸ���� ���� ���� ��� ����� ���� UI ����
	���� ���� : ����
	��ȯ��    : Boolean
*/
//bool ApplyInfoStatsUI::selectApplyInfoStats()
//{
//	ApplyInfoStatsControl applyInfoStats;
//
//	cout << "[���� ���� ���]" << endl;
//    bool result = applyInfoStats.showApplyInfoStats();
//
//    if (result) {   cout << "���� ���� ��踦 ��ȸ�մϴ�." << endl; }
//	else { cout << "��ȸ�� ���� ������ �����ϴ�." << endl; }
//
//    return result;
//}

ApplyInfoStatsUI::ApplyInfoStatsUI(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection)
    : applyInfoStatsControl(employInfoCollection, applyInfoCollection) {}

vector<string> ApplyInfoStatsUI::selectApplyInfoStats() {
    map<string, int> map = applyInfoStatsControl.showApplyInfoStats();
    vector<string> ret;
    for (auto iter : map) {
        string tmp = iter.first + " " + to_string(iter.second);
        ret.push_back(tmp);
    }
    return ret;
}