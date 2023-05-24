#include <string>
#include "CancelApplyInfoUI.h"
#include "CancelApplyInfo.h"

/*
	함수 이름 : CancelApplyInfoUI::cancelApplyInfoUI(string bNum)
	기능	  : 일반 회원의 지원 정보 삭제를 위한 UI 제공
	전달 인자 : 없음
	반환값    : Boolean
*/
bool CancelApplyInfoUI::cancelApplyInfoUI(string bNum)
{
    CancelApplyInfo cancelApplyInfo;

    cout << "[지원 정보 삭제]" << endl;
    bool result = cancelApplyInfo.cancelApplyInfo(bNum);

    if (result) {   cout << "해당 지원 정보가 취소되었습니다." << endl;   }
    else {  cout << "취소할 지원 정보를 찾을 수 없습니다." << endl;    }

    return result;
}