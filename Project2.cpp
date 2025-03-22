#include "Project2.h"
#include <iostream>
#include <iomanip>

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
        
    }
}

int main() {

   displaySchoolInfo();
   vector<Account> accounts;
   int choice;

   choice = static_cast<options>(choice);

   do{

       displayMenu();

       cin >> choice;

       switch(choice) {

           case OPEN:
           {
                addNewAcc;

                break;
           }

           case DEPOSIT:
           {
                if (accounts.empty()) {

                    cout << "There are no accounts open." << endl;
                    break;
                }
                
                else {

                    depositToAcc(accounts);
                }
             
                break;
           }

           case WITHDRAW:
           {
                if (accounts.empty()) {
                    
                    cout << "There are no accounts open." << endl;
                    break;
                }
                
                else {

                    withdrawFromAcc(accounts);
                }

                break;
           }

           case DISPLAY:
           {
                if (accounts.empty()) {
                    
                    cout << "There are no accounts open." << endl;
                    break;
                }

                else {

                    displayAccounts(accounts);
                }

                break;
           }

           case EXIT:
           {
                cout << "Thank you for using this program." << endl;
           }

           default: 
           {
               cout << "Please enter a number 1 - 5";
               break;
           }
       }
   }while(choice != EXIT);    


   return 0;
}