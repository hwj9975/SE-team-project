#include <string>

#include "ApplyInfoStats.h"
#include "ApplyCollection.h"
#include "SessionCollection.h"

/*
	함수 이름 : ApplyInfoStats::showEmployInfoStats()
	기능	  : 일반 회원의 지원 정보 통계 출력
	전달 인자 : 없음
	반환값    : Boolean
*/
bool ApplyInfoStats::showApplyInfoStats()
{
	// Session

    ApplyCollection applyCollection;

	// 지원 정보 통계 조회
	// 조회 가능한 경우에 true, 불가능한 경우에 false 반환
	return applyCollection.getApplyStats();
}