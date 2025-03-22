#include "Account.h"
#include <iostream>
#include <iomanip>

Account::Account(string& userName, float initialBalance) {

   accNumber = new int;

   *accNumber = nextAccNumber;

   name = userName;

   balance = initialBalance;

   nextAccNumber++;
}

Account::~Account() {

   delete accNumber;
}

void Account::setName(string name) {

   this->name = name;
}

void Account::setBalance(float balance) {

   this->balance = balance;
}

void Account::deposit(float amount) {

   balance += amount;
}

void Account::withdraw(float amount) {

      balance -= amount;
}

int Account::getAccNumber() const {

   return *accNumber;
}

string Account::getName() const {
   return name;
}

float Account::getBalance() const {
   return balance;
}

int Account::getNextAccNumber() {
   return nextAccNumber;
}