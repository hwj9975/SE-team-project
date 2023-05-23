#include <AuthenticationUI.h>

AuthenticationUI::AuthenticationUI(AccountCollection* accountCollection, SessionCollection* sessionCollection) 
    : authenticationControl(accountCollection, sessionCollection) {}

bool AuthenticationUI::requestLogin(std::string id, std::string password) {
    return authenticationControl.login(id, password);
}

bool AuthenticationUI::requestLogout(std::string id) {
    return authenticationControl.logout(id);
}
