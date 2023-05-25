#include "GeneralAccount.h"

/**
 * 함수 이름 : GeneralAccount
 * 기능    : 생성자
 * 전달 인자: string id, const string& password, const string& name, const string& residentId
 * 반환값  : null
 */
GeneralAccount::GeneralAccount(string id, const string& password, const string& name, const string& residentId)
    : Account(id, password, name), residentId(residentId) {}


/**
* 함수 이름 : getResidentId
* 기능    : 주민번호 반환
* 전달 인자: null
* 반환값  : string
*/
string GeneralAccount::getResidentId() const {
    return residentId;
}
