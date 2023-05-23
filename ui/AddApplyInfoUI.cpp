#include <AddApplyInfoUI.h>
#include <SessionCollection.h>
#include <EmployInfoCollection.h>

AddApplyInfoUI::AddApplyInfoUI(ApplyInfoCollection* applyInfoCollection) 
    : addApplyInfoControl(applyInfoCollection) {}

void AddApplyInfoUI::addApplyInfo(std::string businessNum) {
    SessionCollection* sessionCollection = SessionCollection::getInstance();
    Session* session = sessionCollection->getSession();
    Account* account = session->getAccount();

    EmployInfoCollection* employInfoCollection = EmployInfoCollection::getInstance();
    EmployInfo employInfo = employInfoCollection->getEmployInfoByBusinessNum(businessNum);

    ApplyInfo* applyInfo = new ApplyInfo(employInfo.getCompanyName(), employInfo.getBusinessNum()
                                        , employInfo.getPosition(), employInfo.getApplicantsNum(), employInfo.getFinishDate(), account->getName());
    addApplyInfoControl.addEmployInfo(applyInfo);
}