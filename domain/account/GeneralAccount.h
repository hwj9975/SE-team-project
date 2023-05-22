#ifndef GENERALACCOUNT_H
#define GENERALACCOUNT_H

#include "Account.h"

class GeneralAccount : public Account {
private:
    std::string residentId;
public:
    GeneralAccount(std::string id, const std::string& password, const std::string& name, const std::string& residentId);
    std::string getResidentId() const;
};

#endif // GENERALACCOUNT_H
