#ifndef PROJECT2_H
#define PROJECT2_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

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

void addNewAcc(vector <Account>& accounts) {
   string name;
   float initialDeposit;

   cout << "Enter account holder's name: ";
   getline(cin, name);

   cout << "Enter initial deposit amount: $";
   cin >> initialDeposit;

   Account newAccount(name, initialDeposit);

   accounts.push_back(newAccount);

   cout << "New account created successfully." << endl;
   cout << "Account holder: " << newAccount.getName() << endl;
   cout << "Account number: " << newAccount.getAccNumber() << endl;
   cout << "Balance: $" << fixed << setprecision(2) << newAccount.getBalance();
}

void depositToAcc(vector <Account>& accounts) {
   int accNum;
   string name;
   float amount;
   bool found = false;

   cout << "Please enter your account number: ";
   cin >> accNum;
   cin.ignore();
   cout << "Enter account holder's name: ";
   getline(cin, name);

   for (size_t i = 0; i < accounts.size(); i++) {
      if (accounts[i].getAccNumber() == accNum && accounts[i].getName() == name) {
           
           found = true;

           cout << "How much would you like to deposit: ";
           cin >> amount;

           if (amount > 0) {

               accounts[i].deposit(amount);
       
               cout << "Balance: $" << fixed << setprecision(2) << accounts[i].getBalance() << endl;
           } 

           else {
               cout << "Error: Deposit amount must be greater than zero." << endl;
           }
           return;
      }
   }

   if (!found) {
       cout << "Error: Account number not found or name does not match." << endl;
   }
}

void withdrawFromAcc(vector <Account>& accounts) {
   int accNum;
   string name;
   float amount;
   bool found = false;

   cout << "Please enter your account number: ";
   cin >> accNum;
   cin.ignore();
   cout << "Enter account holder's name: ";
   getline(cin, name);

   for (size_t i = 0; i < accounts.size(); i++) {
      if (accounts[i].getAccNumber() == accNum && accounts[i].getName() == name) {
           
           found = true;

           cout << "How much would you like to withdraw: ";
           cin >> amount;

           if (amount > 0) {

               accounts[i].withdraw(amount);
       
               cout << "Balance: $" << fixed << setprecision(2) << accounts[i].getBalance() << endl;
           } 

           else {
               cout << "Error: Withdraw amount must be greater than zero." << endl;
           }
           return;
      }
   }

   if (!found) {
       cout << "Error: Account number not found or name does not match." << endl;
   }

}

void displayAccounts(vector <Account> accounts){
   
   for (size_t i = 0; i < accounts.size(); i++) {
      
      cout << "Account: " << accounts[i].getAccNumber() << endl;
      cout << "Name: " << accounts[i].getName() << endl;
      cout << "Balance: " << fixed << setprecision(2) << accounts[i].getBalance() << endl;
      cout << endl;

   }
}

#endif