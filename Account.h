#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

using namespace std;

class Account{
   private:
      int* accNumber;
      string name;
      float balance;
      static int nextAccNumber;

   public:
      ~Account();

      Account();

      Account(string& name, float balance);

      Account(const Account& other);

      void setName(string name);

      void setBalance(float balance);

      int getAccNumber() const;
      
      string getName() const;

      float getBalance() const;

      void displayAccounts () const;
   
};

#endif