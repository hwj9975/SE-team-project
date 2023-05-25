#include "EmployInfo.h"

EmployInfo::EmployInfo(string companyName, string businessNum, string position, int applicantsNum, string finishDate)
        : companyName(companyName), businessNum(businessNum), position(position), applicantsNum(applicantsNum), finishDate(finishDate) {
    currentAppliedApplicantsNum = 0;
}
string EmployInfo::getCompanyName() const {
    return this->companyName;
}
string EmployInfo::getBusinessNum() const {
    return this->businessNum;
}
string EmployInfo::getPosition() const {
    return this->position;
}
int EmployInfo::getApplicantsNum() const {
    return this->applicantsNum;
}
string EmployInfo::getFinishDate() const {
    return this->finishDate;
}
void EmployInfo::increaseCurrentAppliedApplicantsNum() {
    this->currentAppliedApplicantsNum++;
}

int EmployInfo::getCurrentAppliedApplicantsNum() {
    return this->currentAppliedApplicantsNum;
}