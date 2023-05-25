#include "ViewEmployInfo.h"
#include "ViewEmployInfoUI.h"
#include "EmployInfo.h"
#include "EmployInfoCollection.h"


/*
 * 함수 이름 : ViewEmployInfo
 * 기능    : ViewEmployInfo 생성자 함수
 * 전달 인자: 
 * 반환값  : 
 */
ViewEmployInfo::ViewEmployInfo()
{
    // 생성자 구현
    ViewEmployInfoUI* viewEmployInfoUI = new ViewEmployInfoUI; // ViewProductUI 클래스를 생성한다
    viewEmployInfoUI->requestEmployInfo(this);
}

/*
 * 함수 이름 : showEmployInfo
 * 기능    : 등록된 채용정보를 보여주는 함수
 * 전달 인자: 
 * 반환값  : void
 */
void ViewEmployInfo::showEmployInfo()
{
    // 채용정보를 표시하는 로직 구현
    vector <EmployInfo*> listEmployInfo;

    EmployInfoCollection* instance = EmployInfoCollection::getInstance();
    listEmployInfo = instance->getListEmployInfo(); 

    for (int i = 0; i < listEmployInfo.size(); i++) 
    {
        ViewEmployInfoUI* viewEmployInfoUI = new ViewEmployInfoUI;
        string employInfo = viewEmployInfoUI->showEmployInfo(listEmployInfo[i]->getPosition(), listEmployInfo[i]->getApplicantsNum(), listEmployInfo[i]->getFinishDate());
        employInfoList += employInfo;
    }
}
