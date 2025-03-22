#include "Project2.h"
#include <iostream>
#include <iomanip>

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
                cin.ignore();

                addNewAcc(accounts);

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