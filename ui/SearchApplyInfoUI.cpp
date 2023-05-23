#include <string>
#include "SearchApplyInfoUI.h"
#include "SearchApplyInfo.h"

/*
	함수 이름 : SearchApplyInfoUI::searchApplyInfo()
	기능	  : 일반 회원의 지원 정보 조회을 위한 UI 제공
	전달 인자 : 없음
	반환값    : Boolean
*/
bool SearchApplyInfoUI::searchApplyInfo()
{
	SearchApplyInfo searchApplyInfo;

	cout << "[지원 정보 조회]" << endl;
	bool result = searchApplyInfo.showApplyInfo();

	if (result)	{	cout << "지원 정보를 조회합니다." << endl;	}
	else {	cout << "지원 정보를 조회할 수 없습니다." << endl;	}

	return result;
}