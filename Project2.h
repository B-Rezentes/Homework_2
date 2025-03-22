#ifndef PROJECT2_H
#define PROJECT2_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#include "Account.h"

using namespace std;

enum options {OPEN = 1, DEPOSIT = 2, WITHDRAW = 3, DISPLAY = 4, EXIT = 5};

void displaySchoolInfo() {

   cout << "+-----------------------------------------------+" << endl;
   cout << "|             Project 2 - C++ Bank              |" << endl;
   cout << "|              Benjamin Rezentes                |" << endl;
   cout << "|                  CSCE 1040                    |" << endl;
   cout << "|     Bmr0208 - Benjaminrezentes@my.unt.edu     |" << endl;
   cout << "+-----------------------------------------------+" << endl;
}

void displayMenu() {

   cout << "----------M E N U----------" << endl;
   cout << "|  1. Open Account        |" << endl;
   cout << "|  2. Deposit             |" << endl;
   cout << "|  3. Withdraw            |" << endl;
   cout << "|  4. Print Accounts      |" << endl;
   cout << "|  5. End Transaction     |" << endl;
   cout << "---------------------------" << endl;
   cout << "-------> ";
}

void addNewAcc(vector <Account>& accounts);

void depositToAcc(vector <Account>& accounts);

void withdrawFromAcc(vector <Account>& accounts);

void displayAccounts(vector <Account> accounts);

#endif