#include "SearchEmployInfoUI.h"

/**
 * 함수 이름 : SearchEmployInfoUI
 * 기능    : singleton인 EmployInfoCollection 주입하는 생성자.
 * 전달 인자: EmployInfoCollection*
 * 반환값  : null
 */
SearchEmployInfoUI::SearchEmployInfoUI(EmployInfoCollection* employInfoCollection) 
    : searchEmployInfoControl(employInfoCollection) {}

/**
 * 함수 이름 : requestEmployInfo
 * 기능    : 회사이름을 기반으로 채용 정보 검색.
 * 전달 인자: string
 * 반환값  : string
 */
string SearchEmployInfoUI::requestEmployInfo(string companyName) {
    vector<EmployInfo> v = searchEmployInfoControl.searchEmployInfo(companyName); //채용정보 검색
    if (v.size() == 0) { //채용정보가 없는 경우
        return "등록된 채용정보가 없습니다.";
    } else { //채용정보 존재
        for (EmployInfo info: v) {
            return "" + info.getCompanyName() + " " + info.getBusinessNum()
                + " " + info.getPosition() + " " + to_string(info.getApplicantsNum()) + " " + info.getFinishDate();
        }
    }
}