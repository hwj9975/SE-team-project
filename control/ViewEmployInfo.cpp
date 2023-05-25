#include "ViewEmployInfo.h"
#include "ViewEmployInfoUI.h"
#include "EmployInfo.h"
#include "EmployCollection2.h"

ViewEmployInfo::ViewEmployInfo()
{
    // 생성자 구현
    ViewEmployInfoUI* viewEmployInfoUI = new ViewEmployInfoUI; // ViewProductUI 클래스를 생성한다
    viewEmployInfoUI->RequestEmployInfo(this);
}

void ViewEmployInfo::ShowEmployInfo()
{
    // 채용정보를 표시하는 로직 구현
    vector <EmployInfo*> listEmployInfo;
    // listSellingProducts는 ListSellingProducts() 함수로부터 현재 로그인한 회원이 판매중인 상품의 주소들을 포인터하는 리스트를 반환받기 위한 벡터임

    listEmployInfo = employInfoCollection->GetListEmployInfo(); // 현재 로그인한 회원의 판매중인 상품 리스트를 받아온다

    for (int i = 0; i < listEmployInfo.size(); i++) // 각 상품의 주소의 포인터들을 받아왔으니 반복문을 통해 상세정보를 viewProductUI에게 전달한다.
    {
        ViewEmployInfoUI* viewEmployInfoUI = new ViewEmployInfoUI;
        viewEmployInfoUI->ShowEmployInfo(listEmployInfo[i]->getPosition(), listEmployInfo[i]->getApplicantsNum(), listEmployInfo[i]->getFinishDate());
    }
}
