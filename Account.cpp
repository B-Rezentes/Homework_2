#include "Account.h"
#include <iostream>
#include <iomanip>

int Account::nextAccNumber = 1000;

Account::Account(const string& userName, float initialBalance) {

   accNumber = new int;

   *accNumber = nextAccNumber;

   name = userName;

   balance = initialBalance;

   nextAccNumber++;
}

Account::Account(const Account& other) {

   accNumber = new int;

   *accNumber = *other.accNumber;

   name = other.name;

   balance = other.balance;
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