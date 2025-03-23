// HOMEWORK PROJECT 2 - MAIN FILE
// Benjamin Rezentes
// Bmr0208
// Benjaminrezentes@my.unt.edu

#include "Project2.h"   
#include <iostream>

int main() {

    displaySchoolInfo();

    // Creating vector that will be used to store accounts
    vector<Account> accounts;

    int choice;

    //Transferring int to the enumeration type to use the switch case block
    choice = static_cast<options>(choice);

    do{

       displayMenu();

       cin >> choice;

       switch(choice) {

           case OPEN:
           {
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
                // Meaningful message before exiting program
                cout << endl << "Thank you for using this program." << endl << endl;

                return 0;
           }

           default: 
           {    
                // Message asking user to enter a number 1 - 5
                cout << "Please enter a number 1 - 5";
                cout << endl;

                break;
           }
       }
   }while(choice != EXIT);    
}