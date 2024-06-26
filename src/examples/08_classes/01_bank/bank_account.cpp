//bank_account.cpp
#include "bank_account.h"
using std::cout; using std::cin;
//These functions are part of the BankAccount class
void BankAccount::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}
void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}

void BankAccount::get_balance_from_db()
{
    balance = rand() % 10000 + 1;
}


//End of code block of functions that belong to the BankAccount class


//free functions---not part of the class 
void display_menu()
{
    cout<<"\n1-Display balance\n";
    cout<<"2-Deposit\n";
    cout<<"3-Withdraw\n";
    cout<<"\n4-Exit\n";
}

void run_menu(BankAccount& account)
{
    auto menu_choice = 0;

    do
    {
        display_menu();
        cout<<"Enter option\n";
        cin>>menu_choice;
        handle_menu(menu_choice, account);

    } while (menu_choice != 4);

}

void handle_menu(int choice, BankAccount& account)
{
    auto amount = 0;

    switch (choice)
    {
    case 1:
        cout<<account.get_balance()<<"\n";
        break;
    case 2:
        cout<<"Enter Deposit amount ";
        cin>>amount;
        account.deposit(amount);
        break;
    case 3:
        cout<<"Enter Withdraw amount";
        cin>>amount;
        account.withdraw(amount);
        break;
    case 4:
        cout<<"Exiting.../n";
        break;

    default:
        break;
    }
}