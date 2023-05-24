#include "AddApplyInfoUI.h"
#include "SessionCollection.h"
#include "EmployInfoCollection.h"
#include "ApplyInfo.h"


/**
 * 함수 이름 : AddApplyInfoUI
 * 기능    : singleton인 ApplyInfoCollection 주입 생성자.
 * 전달 인자: ApplyInfoCollection*
 * 반환값  : string
 */
AddApplyInfoUI::AddApplyInfoUI(ApplyInfoCollection* applyInfoCollection) 
    : addApplyInfoControl(applyInfoCollection) {}

/**
 * 함수 이름 : addApplyInfo
 * 기능    : 사업자번호 기반 채용 지원.
 * 전달 인자: string
 * 반환값  : string
 */
string AddApplyInfoUI::addApplyInfo(string businessNum) {
    ApplyInfo info = addApplyInfoControl.addEmployInfo(businessNum); // 채용 지원.
    return "" + info.getCompanyName() + " " + info.getBusinessNum() + " " + info.getPosition();
}