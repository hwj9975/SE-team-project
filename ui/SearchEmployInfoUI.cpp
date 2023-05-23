#include <SearchEmployInfoUI.h>

SearchEmployInfoUI::SearchEmployInfoUI(EmployInfoCollection* employInfoCollection) 
    : searchEmployInfoControl(employInfoCollection) {}

bool SearchEmployInfoUI::requestEmployInfo(std::string companyName) {
    searchEmployInfoControl.showEmployInfo(companyName);
}