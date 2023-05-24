#include <iostream>
#include <fstream>
#include "AccountCollection.h"
#include "ApplyInfoCollection.h"
#include "EmployInfoCollection.h"
#include "SessionCollection.h"
#include "AddAccountUI.h"

#include "RemoveAccountUI.h"
#include "AuthenticationUI.h"
#include "SearchEmployInfoUI.h"
#include "AddApplyInfoUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

ifstream inputFile(INPUT_FILE_NAME);   // input.txt 를 읽기모드로 열음
ofstream outputFile(OUTPUT_FILE_NAME); // output.txt 를 쓰기모드로 열음

/**
 * 함수 이름 : doTask
 * 기능    : collection 생성 및 UI기능 실행
 * 전달 인자: null
 * 반환값  : null
 */
void doTask() {
    AccountCollection* accountCollection = AccountCollection::getInstance();
    ApplyInfoCollection* applyInfoCollection = ApplyInfoCollection::getInstance();
    EmployInfoCollection* employInfoCollection = EmployInfoCollection::getInstance();
    SessionCollection* sessionCollection = SessionCollection::getInstance();

    AddAccountUI addAccountUi(accountCollection);
    RemoveAccountUI removeAccountUi(accountCollection);
    AuthenticationUI authenticationUi(accountCollection, sessionCollection);
    SearchEmployInfoUI searchEmployInfoUi(employInfoCollection);
    AddApplyInfoUI addApplyInfoUi(applyInfoCollection);

    if (inputFile.is_open()) {
        while (!inputFile.eof()) {
            while (1) {
                string input;
                int menu1, menu2;
                inputFile >> menu1 >> menu2;

                if (menu1 == 1 && menu2 == 1) {
                    getline(inputFile, input);
                    outputFile << "1.1. 회원가입\n";
                    outputFile << "> " << addAccountUi.requestRegister(input) << "\n";
                } else if (menu1 == 1 && menu2 == 2){
                    outputFile << "1.2. 회원탈퇴\n";
                    outputFile << "> " << removeAccountUi.requestRemove();
                } else if (menu1 == 2 && menu2 == 1){
                    getline(inputFile, input);
                    outputFile << "2.2. 로그인\n";
                    outputFile << "> " << authenticationUi.requestLogin(input);
                } else if (menu1 == 2 && menu2 == 2){
                    outputFile << "2.3. 로그아웃\n";
                    outputFile << "> " << authenticationUi.requestLogout();
                } else if (menu1 == 3 && menu2 == 1){
                    getline(inputFile, input);
                    outputFile << "3.1. 채용 정보 등록\n";
                    outputFile << "> ";
                } else if (menu1 == 3 && menu2 == 2){
                    outputFile << "3.2. 등록된 채용 정보 조회\n";
                    outputFile << "> ";
                } else if (menu1 == 4 && menu2 == 1){
                    getline(inputFile, input);
                    outputFile << "4.1. 채용 정보 검색\n";
                    outputFile << "> " << searchEmployInfoUi.requestEmployInfo(input);
                } else if (menu1 == 4 && menu2 == 2){
                    getline(inputFile, input);
                    outputFile << "4.2. 채용 지원\n";
                    outputFile << "> " << addApplyInfoUi.addApplyInfo(input);
                } else if (menu1 == 4 && menu2 == 3){
                    outputFile << "4.2. 지원 정보 조회\n";
                    outputFile << "> ";
                } else if (menu1 == 4 && menu2 == 4){
                    getline(inputFile, input);
                    outputFile << "4.4. 지원 취소\n";
                    outputFile << "> ";
                } else if (menu1 == 5 && menu2 == 1){
                    outputFile << "5.1. 지원 정보 통계\n";
                    outputFile << "> ";
                } else if (menu1 == 6 && menu2 == 1){
                    outputFile << "6.1. 종료\n";
                    outputFile << "> ";
                } else {
                    getline(inputFile, input);
                }
            }
        }
    }
}
int main(int argc, char const *argv[]) {
    doTask();
    return 0;
}
