#include <AddApplyInfoUI.h>
#include <SessionCollection.h>
#include <EmployInfoCollection.h>

/**
 * singleton인 ApplyInfoCollection 생성자 주입.
*/
AddApplyInfoUI::AddApplyInfoUI(ApplyInfoCollection* applyInfoCollection) 
    : addApplyInfoControl(applyInfoCollection) {}


/**
 * 사업자번호 기반 채용 지원.
*/
void AddApplyInfoUI::addApplyInfo(std::string businessNum) {
    std::cout << "4.2. 채용 지원\n";
    std::cout << "> ";

    ApplyInfo info = addApplyInfoControl.addEmployInfo(businessNum); // 채용 지원.
    cout << info.getCompanyName() << " " << info.getBusinessNum() << " " << info.getPosition() << "\n";
}