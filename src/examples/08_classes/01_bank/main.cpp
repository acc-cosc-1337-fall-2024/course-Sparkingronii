#include "atm.h"
#include "bank_DB.h"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include "customer.h"

#include<iostream>
#include<memory>
#include<time.h>
#include<vector>
using std::cout; using std::vector;
using std::unique_ptr; using std::make_unique;
int main()
{
	srand(time(NULL));

	//Inheritance + pointer + virtual function = Polymorphism.  BankAccount will behave as SavingsAccount at runtime.
	vector<unique_ptr<BankAccount>> accounts;
	vector<Customer> customers;
	customers.push_back(Customer(1, "John Doe"));
	customers.push_back(Customer(2, "Mary Doe"));
	customers.push_back(Customer(3, "John Hancock"));
	customers.push_back(Customer(4, "Mary Hancock"));
	customers.push_back(Customer(5, "Bjarne Stroustrup"));

	ATM atm(customers);

	accounts.push_back(make_unique<CheckingAccount>());
	accounts.push_back(make_unique<SavingsAccount>());

	cout<<accounts[0]->get_balance()<<"\n";//checking 
	cout<<accounts[1]->get_balance()<<"\n";//savings
	run_menu(atm);

	return 0;
}