#ifndef VIEW_EMPLOY_INFO_H
#define VIEW_EMPLOY_INFO_H


/*
Class: ViewEmployInfo
Description: 채용정보조회 컨트롤 클래스이다.
*/
class ViewEmployInfo
{
private:
    string employInfoList;
public:
    ViewEmployInfo();
    void showEmployInfo();
    string getEmployInfoList(){return employInfoList;};
};

#endif
