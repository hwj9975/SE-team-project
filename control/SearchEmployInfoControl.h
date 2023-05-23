#ifndef SEARCHEMPLOYINFOCONTROL_H
#define SEARCHEMPLOYINFOCONTROL_H

#include <string>
#include <vector>
#include <EmployInfoCollection.h>

class SearchEmployInfoControl
{
private:
    EmployInfoCollection* employInfoCollection;
public:
    SearchEmployInfoControl(EmployInfoCollection* employInfoCollection) {
        this->employInfoCollection = employInfoCollection;
    }
    EmployInfo showEmployInfo(std::string companyName){
        vector<EmployInfo> v =  employInfoCollection->getEmployInfo(companyName);

        for (EmployInfo info: v) {
            std::cout << info.getCompanyName() << " " << info.getBusinessNum() 
                << " " << info.getPosition() << " " << info.getApplicantsNum() << " " << info.getFinishDate() << "\n";
        }
    }
};

#endif
