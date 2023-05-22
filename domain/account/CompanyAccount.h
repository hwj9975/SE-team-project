#ifndef COMPANYACCOUNT_H
#define COMPANYACCOUNT_H

#include "Account.h"

class CompanyAccount : public Account {
private:
    std::string businessNumber;
public:
    CompanyAccount(std::string id, const std::string& password, const std::string& name, const std::string& businessNumber);
    std::string getBusinessNumber() const;
};

#endif // COMPANYACCOUNT_H
