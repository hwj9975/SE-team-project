#ifndef REMOVEACCOUNTCONTROL_H
#define REMOVEACCOUNTCONTROL_H

#include <string>
#include "AccountCollection.h"
#include "SessionCollection.h"
using namespace std;

class RemoveAccountControl
{
private:
    AccountCollection* accountCollection;
public:
    /**
    * 함수 이름 : RemoveAccountControl
    * 기능    : singleton인 accountCollection 생성자 주입.
    * 전달 인자: AccountCollectionv*
    * 반환값  : null
    */
    RemoveAccountControl(AccountCollection* accountCollection) {
        this->accountCollection = accountCollection;
    }

    /**
    * 함수 이름 : removeAccount
    * 기능    : 현재 활성화된 계정 세션기반 확인 후 탈퇴.
    * 전달 인자: null
    * 반환값  : string
    */
    string removeAccount() {
        SessionCollection* sessionCollection = SessionCollection::getInstance();
        Session* session = sessionCollection->getSession();
        string id = session->getId();
        
        sessionCollection->removeSession(); // 세션 삭제.
        accountCollection->removeAccount(id); // 계정 삭제.
        return id;
    }
};

#endif
