//bank_account.h
#include<iostream>
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
class BankAccount
{
public: //other regions of code, main, test, other function, another class can see the get_balance
    BankAccount(){std::cout<<"BankAccount Default constructor fired: \n";}//with no parameters-default synthesized constructor
    BankAccount(int b) : balance(b)  {std::cout<<"BankAccount Constructor with balance parameter fired: \n";}

    int get_balance(){std::cout<<"Bank get balance: ";return balance;}
    virtual int get_balance(){std::cout<<"Bank get balance: ";return balance;}
    void deposit(int amount);
    void withdraw(int amount);

private://only BankAccount can read/write to the balance directly
    int balance{0}; //initialize balance to zero on class creation  
};
#endif