#ifndef COMPANYACCOUNT_H
#define COMPANYACCOUNT_H

#include "Account.h"
using namespace std;

class CompanyAccount : public Account {
private:
    string businessNumber;
public:
    CompanyAccount(string id, const string& password, const string& name, const string& businessNumber);
    string getBusinessNumber() const;
};

#endif // COMPANYACCOUNT_H
