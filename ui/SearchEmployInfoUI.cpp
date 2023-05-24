#include "SearchEmployInfoUI.h"

/**
 * singleton인 EmployInfoCollection 생성자 주입.
*/
SearchEmployInfoUI::SearchEmployInfoUI(EmployInfoCollection* employInfoCollection) 
    : searchEmployInfoControl(employInfoCollection) {}

/**
 * 회사이름을 기반으로 채용 정보 검색.
*/
void SearchEmployInfoUI::requestEmployInfo(std::string companyName) {
    std::cout << "4.1. 채용 정보 검색\n";
    std::cout << "> ";

    std::vector<EmployInfo> v = searchEmployInfoControl.searchEmployInfo(companyName); //채용정보 검색
    if (v.size() == 0) { //채용정보가 없는 경우
        std::cout << "등록된 채용정보가 없습니다.\n";
    } else { //채용정보 존재
        for (EmployInfo info: v) {
            std::cout << info.getCompanyName() << " " << info.getBusinessNum() 
                << " " << info.getPosition() << " " << info.getApplicantsNum() << " " << info.getFinishDate() << "\n";
        }
    }
}