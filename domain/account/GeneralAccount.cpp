#include "GeneralAccount.h"

GeneralAccount::GeneralAccount(std::string id, const std::string& password, const std::string& name, const std::string& residentId)
    : Account(id, password, name), residentId(residentId) {}

std::string GeneralAccount::getResidentId() const {
    return residentId;
}
