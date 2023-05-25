#pragma once
#include <iostream>
#include "EmployInfoCollection.h"
#include "ApplyInfoCollection.h"
#include "SessionCollection.h"
#include "GeneralAccount.h"
#include "CompanyAccount.h"

using namespace std;

class ApplyInfoStatsControl
{
private:
	EmployInfoCollection* employInfoCollection;
    ApplyInfoCollection* applyInfoCollection;
public:
    ApplyInfoStatsControl(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection) {
        this->employInfoCollection = employInfoCollection;
        this->applyInfoCollection = applyInfoCollection;
    }
    map<string, int> showApplyInfoStats() {
        SessionCollection *collection = SessionCollection::getInstance();
        Session *session = collection->getSession();
        Account *account = session->getAccount();
        map<string, int> ret;
        if (typeid(account) == typeid(GeneralAccount)) {
            ret = applyInfoCollection->getApplyStats();
        } else if (typeid(account) == typeid(CompanyAccount)){
            ret = employInfoCollection->getEmployStats();    
        }
        
        return ret;
    }
};