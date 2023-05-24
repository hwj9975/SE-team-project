#ifndef ADDAPPLYINFOCONTROL_H
#define ADDAPPLYINFOCONTROL_H

#include "ApplyInfoCollection.h"
#include "SessionCollection.h"
#include "EmployInfoCollection.h"

class AddApplyInfoControl
{
private:
    ApplyInfoCollection* applyInfoCollection; // singleton
public:
    /**
     * singleton 객체 생성자 주입
    */
    AddApplyInfoControl(ApplyInfoCollection* applyInfoCollection) {
        this->applyInfoCollection = applyInfoCollection;
    }

    /**
     * 사업자 번호 기반 지원 정보 저장.
    */
    ApplyInfo addEmployInfo(std::string businessNum) {
        // 현재 지원하고자 하는 사람의 세션정보 가져옴.
        SessionCollection* sessionCollection = SessionCollection::getInstance(); 
        Session* session = sessionCollection->getSession();
        Account* account = session->getAccount();

        // 사업자 번호 기반 지원하고자 하는 채용정보 가져옴.
        EmployInfoCollection* employInfoCollection = EmployInfoCollection::getInstance();
        EmployInfo employInfo = employInfoCollection->getEmployInfoByBusinessNum(businessNum);

        // 지원정보 작성.
        ApplyInfo* applyInfo = new ApplyInfo(employInfo.getCompanyName(), employInfo.getBusinessNum()
                                        , employInfo.getPosition(), employInfo.getApplicantsNum(), employInfo.getFinishDate(), account->getName());

        // 지원.
        applyInfoCollection->addApplyInfo(applyInfo);
        return *applyInfo;
    }
};

#endif