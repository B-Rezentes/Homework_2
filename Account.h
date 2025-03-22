#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <iostream>

using namespace std;

class Account{
   private:
      int* accNumber;
      string name;
      float balance;
      static int nextAccNumber;

   public:

      Account(string& name, float balance);

      ~Account();

      void setName(string name);

      void setBalance(float amount);

      void deposit(float amount);

      void withdraw(float amount);

      int getAccNumber() const;   

      string getName() const;

      float getBalance() const;

      int getNextAccNumber();

};

#endif