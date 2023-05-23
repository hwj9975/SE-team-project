#ifndef SEARCHEMPLOYINFOUI_H
#define SEARCHEMPLOYINFOUI_H

#include <SearchEmployInfoControl.h>

class SearchEmployInfoUI
{
private:
    SearchEmployInfoControl searchEmployInfoControl;
    
public:
    SearchEmployInfoUI(EmployInfoCollection* employInfoCollection);
    bool requestEmployInfo(std::string companyName);
};

#endif
