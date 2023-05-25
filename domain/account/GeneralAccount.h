#ifndef GENERALACCOUNT_H
#define GENERALACCOUNT_H

#include "Account.h"
using namespace std;

class GeneralAccount : public Account {
private:
    string residentId;
public:
    GeneralAccount(string id, const string& password, const string& name, const string& residentId);
    string getResidentId() const;
};

#endif // GENERALACCOUNT_H
