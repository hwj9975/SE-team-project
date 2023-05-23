#include <string>

#include "ApplyInfoStatsUI.h"
#include "ApplyInfoStats.h"

/*
	함수 이름 : ApplyInfoStatsUI::selectEmployInfoStats()
	기능	  : 일반 회원의 지원 정보 통계 출력을 위한 UI 제공
	전달 인자 : 없음
	반환값    : Boolean
*/
bool ApplyInfoStatsUI::selectApplyInfoStats()
{
	ApplyInfoStats applyInfoStats;

	cout << "[지원 정보 통계]" << endl;
    bool result = applyInfoStats.showApplyInfoStats();

    if (result) {   cout << "지원 정보 통계를 조회합니다." << endl; }
	else { cout << "조회할 지원 정보가 없습니다." << endl; }

    return result;
}