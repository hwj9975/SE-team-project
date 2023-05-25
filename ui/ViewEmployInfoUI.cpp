#include <fstream>

#include "ViewEmployInfoUI.h"
#include "ViewEmployInfo.h"

/*
 * 함수 이름 : requestEmployInfo
 * 기능    : 채용정보조회요청을 컨트롤에 알려주는 함수입니다.
 * 전달 인자: ViewEmployInfo* viewEmployInfo
 * 반환값  : void
 */
void ViewEmployInfoUI::requestEmployInfo(ViewEmployInfo* viewEmployInfo)
{
    viewEmployInfo->showEmployInfo();
}


/*
 * 함수 이름 : showEmployInfo
 * 기능    : 조회된 채용정보를 출력하는 함수입니다
 * 전달 인자: string position, int applicantsNum, string finishDate
 * 반환값  : string
 */
string ViewEmployInfoUI::showEmployInfo(string position, int applicantsNum, string finishDate)
{
    string output = "> ";
    output += position + " " + to_string(applicantsNum) + " " + finishDate + "\n";
    return output;
}
