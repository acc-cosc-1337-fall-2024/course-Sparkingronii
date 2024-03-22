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











//End of code block of functions that belong to the BankAccount class


//free functions---not part of the class 
void display_menu()
{
    cout<<"\n1-Display balance\n";
    cout<<"2-Deposit\n";
    cout<<"\n4-Exit\n";
}

@@ -27,12 +50,18 @@ void run_menu(BankAccount& account)

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
    case 4:
        cout<<"Exiting.../n";
        break;
    }
}


