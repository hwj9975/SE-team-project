#ifndef SEARCHEMPLOYINFOUI_H
#define SEARCHEMPLOYINFOUI_H

#include "SearchEmployInfoControl.h"

class SearchEmployInfoUI
{
private:
    SearchEmployInfoControl searchEmployInfoControl;
    
public:
    SearchEmployInfoUI(EmployInfoCollection* employInfoCollection); // 생성자 singleton 주입
    void requestEmployInfo(std::string companyName); // 회사이름 기반 채용정보 검색
};

#endif
