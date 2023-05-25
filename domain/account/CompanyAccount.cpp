#include "CompanyAccount.h"

/**
 * 함수 이름 : CompanyAccount
 * 기능    : 생성자
 * 전달 인자: string id, const string& password, const string& name, const string& businessNumber
 * 반환값  : null
 */
CompanyAccount::CompanyAccount(string id, const string& password, const string& name, const string& businessNumber)
    : Account(id, password, name), businessNumber(businessNumber) {}

/**
* 함수 이름 : getBusinessNumber
* 기능    : 사업자번호 반환
* 전달 인자: null
* 반환값  : string
*/
string CompanyAccount::getBusinessNumber() const {
    return businessNumber;
}
