#include "Account.h"

Account::~Account() {

   delete accNumber;
}

Account::Account() {

   //accNumber = new int(accNumber);

   name = "n/a";

   balance = 0.0;
}

Account::Account(string& name, float balance) {

   //this->accNumber = new int(accNumber);

   this->name = name;

   this->balance = balance;
}

void Account::setName(string name) {

   this->name = name;
}

void Account::setBalance(float balance) {

   this->balance = balance;
}

int Account::getAccNumber() const {

}

string Account::getName() const {

}

float Account::getBalance() const {

}

void Account::displayAccounts() const {
   
}