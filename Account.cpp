// HOMEWORK PROJECT 2 - ACCOUNT DEFINITIONS
// Benjamin Rezentes
// Bmr0208
// Benjaminrezentes@my.unt.edu

#include "Account.h"
#include <iostream>

// Initializing static int to 100

int Account::nextAccNumber = 1000;

// Basic Public constructor

Account::Account() {
   name = "n/a";
   balance = 0.00;
}


// Regular overload Account constructor

Account::Account(const string& userName, float initialBalance) {

   // Dynamically creating memory for accNumber
   accNumber = new int;

   // Setting pointer to nextAccNumber value
   *accNumber = nextAccNumber;

   name = userName;

   balance = initialBalance;

   // Incrementing nextAccNumber so the next account has a different number
   nextAccNumber++;
}

/* Copy constructor so when using dynamic memory in the program we can avoid shared memory or dangling pointers */

Account::Account(const Account& other) {

   accNumber = new int;

   *accNumber = *other.accNumber;

   name = other.name;

   balance = other.balance;
}

// Public destructor to free up memory

Account::~Account() {

   delete accNumber;
}

// Account mutator functions 

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

// Account accessor functions

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