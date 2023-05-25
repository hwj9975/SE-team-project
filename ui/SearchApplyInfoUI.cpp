#include "SearchApplyInfoUI.h"


//SearchApplyInfoUI::SearchApplyInfoUI(ApplyInfoCollection* applyInfoCollection) {

//}

SearchApplyInfoUI::SearchApplyInfoUI(ApplyInfoCollection* applyInfoCollection)
    : searchApplyInfoControl(applyInfoCollection) {}


vector<string> SearchApplyInfoUI::searchApplyInfo() {
    vector<ApplyInfo> val = searchApplyInfoControl.showApplyInfo();
    vector<string> ret;
    for (ApplyInfo info :val) {
        string tmp = "" + info.getCompanyName() + " " + info.getBusinessNum() + " " + info.getPosition()+ " "
                + to_string(info.getEmployedNum()) + " " + info.getFinishDate();
    }
    return ret;
}