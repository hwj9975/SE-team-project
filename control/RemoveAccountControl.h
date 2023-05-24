#ifndef REMOVEACCOUNTCONTROL_H
#define REMOVEACCOUNTCONTROL_H

#include <string>
#include <AccountCollection.h>
#include <SessionCollection.h>

class RemoveAccountControl
{
private:
    AccountCollection* accountCollection;
public:
    /**
     * singleton인 accountCollection 생성자 주입.
    */
    RemoveAccountControl(AccountCollection* accountCollection) {
        this->accountCollection = accountCollection;
    }
    
    /**
     * 현재 활성화된 계정 세션기반 확인 후 탈퇴.
    */
    std::string removeAccount() {
        SessionCollection* sessionCollection = SessionCollection::getInstance();
        Session* session = sessionCollection->getSession();
        std::string id = session->getId();
        
        sessionCollection->removeSession(); // 세션 삭제.
        accountCollection->removeAccount(id); // 계정 삭제.
        return id;
    }
};

#endif
