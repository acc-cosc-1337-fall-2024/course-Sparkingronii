//write include statements
#include<iostream>
#include "hwexpressions.h"

using std::cin; using std::cout;

//write namespace using statement for cout

int main()
{
double meal_amount = 0;
double tip_rate = 0;
double tip_amount = 0;
double tax_amount = 0;
double total = 0;

cout<<"Meal Amount: ";
cin>>meal_amount;

tax_amount = get_sales_tax(meal_amount);

cout<<"Tip Rate: ";
cin>>tip_rate;

tip_amount = get_tip_amount(meal_amount, tip_rate);

total = tip_amount + tax_amount + meal_amount;

cout<<"Meal Amount: "<<meal_amount<< "\n";
cout<<"Tip Amount: "<<tip_amount<< "\n";
cout<<"Sales Amount: "<<tax_amount<< "\n";
cout<<"Total: "<<total<< "\n";

	return 0;
}
