// HOMEWORK PROJECT 2 - MAIN DEFINITIONS
// Benjamin Rezentes
// Bmr0208
// Benjaminrezentes@my.unt.edu

#ifndef PROJECT2_H
#define PROJECT2_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

#include "Account.h"

using namespace std;

// Enumeration declaraton and definiton to use in main function

enum options {OPEN = 1, DEPOSIT = 2, WITHDRAW = 3, DISPLAY = 4, EXIT = 5};

// Function to display school info to the terminal

void displaySchoolInfo() {

   cout << endl;
   cout << "+-----------------------------------------------+" << endl;
   cout << "|             Project 2 - C++ Bank              |" << endl;
   cout << "|              Benjamin Rezentes                |" << endl;
   cout << "|                  CSCE 1040                    |" << endl;
   cout << "|     Bmr0208 - Benjaminrezentes@my.unt.edu     |" << endl;
   cout << "+-----------------------------------------------+" << endl;
   cout << endl;
}

// Function to display function menu to the user

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

// Function that adds a new account using the vector created in the main function

void addNewAcc(vector <Account>& accounts) {

   string name;
   float initialDeposit;

   cin.ignore();

   cout << "Enter account holder's name: ";
   getline(cin, name);

   cout << "Enter initial deposit amount: $";
   cin >> initialDeposit;

   Account newAccount(name, initialDeposit);

   accounts.push_back(newAccount);

   cout << "New account created successfully." << endl << endl;
   cout << "Account holder: " << newAccount.getName() << endl;
   cout << "Account number: " << newAccount.getAccNumber() << endl;
   cout << "Balance: $" << fixed << setprecision(2) << newAccount.getBalance() << endl;
   cout << endl;
}

// Function that depoits money into an account using the vector created in the main function

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

               cout << endl;
               cout << "Balance: $" << fixed << setprecision(2) << accounts[i].getBalance() << endl;
               cout << endl;
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

   // For loop checking every account to find one that matches name and number

   for (size_t i = 0; i < accounts.size(); i++) {

      if (accounts[i].getAccNumber() == accNum && accounts[i].getName() == name) {
           
           found = true;

           cout << "How much would you like to withdraw: ";
           cin >> amount;

           if (amount > 0) {

               accounts[i].withdraw(amount);

               cout << endl;
               cout << "Balance: $" << fixed << setprecision(2) << accounts[i].getBalance() << endl;
               cout << endl;
           } 
           
           // Displaying error message if amount was less than 0
           else {

               cout << "Error: Withdraw amount must be greater than zero." << endl;
           }
           return;
      }
   }

   // Displaying error message if account was not found

   if (!found) {

       cout << "Error: Account number not found or name does not match." << endl;
   }

}

// Function displaying every account in vector from main function

void displayAccounts(vector <Account> accounts){
   
   cout << "Number of accounts: " << accounts.size() << endl << endl;

   for (size_t i = 0; i < accounts.size(); i++) {

      cout << "Name: " << accounts[i].getName() << endl;
      cout << "Account: " << accounts[i].getAccNumber() << endl;
      cout << "Balance: $" << fixed << setprecision(2) << accounts[i].getBalance() << endl;
      cout << endl;

   }
}

#endif