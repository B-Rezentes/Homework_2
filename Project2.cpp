#include "Project2.h"

int choice;

int main() {

   displaySchoolInfo();
   vector<Account> accounts;

   choice = static_cast<options>(choice);

   do{

       displayMenu();

       cin >> choice;

       switch(choice) {

           case OPEN:
           {
               break;
           }

           case DEPOSIT:
           {
               break;
           }

           case WITHDRAW:
           {
               break;
           }

           case DISPLAY:
           {
               break;
           }

           case EXIT:
           {
               break;
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