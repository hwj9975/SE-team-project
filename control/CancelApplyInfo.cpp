#include <string>

#include "CancelApplyInfo.h"
#include "ApplyCollection.h"
#include "SessionCollection.h"

/*
	함수 이름 : CancelApplyInfo::cancelApplyInfo(string bNum)
	기능	  : 일반 회원의 지원 정보 삭제
	전달 인자 : 없음
	반환값    : Boolean
*/
bool CancelApplyInfo::cancelApplyInfo(string bNum)
{
	// Session

    ApplyCollection applyCollection;

	// 지원 정보 삭제
	// 삭제 가능한 경우에 true, 불가능한 경우에 false 반환
    return applyCollection.deleteCancelApplyInfo(bNum);
}