//bank_account.h
#include<iostream>

class BankAccount
{


public: //other regions of code, main, test, other function, another class can see the get_balance
    BankAccount(){}//with no parameters-default synthesized constructor
    BankAccount(int b) : balance(b)  {/*empty class function/method block*/ }

    int get_balance(){return balance;}

private://only BankAccount can read/write to the balance directly

    int balance{0}; //initialize balance to zero on class creation  
};

void display_menu();
void run_menu(BankAccount& account);
void handle_menu(int choice, BankAccount& account);