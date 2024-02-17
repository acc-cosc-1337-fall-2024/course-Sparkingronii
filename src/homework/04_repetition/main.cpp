//write include statements
#include<iostream>
#include "repetition.h"
using std::cin; using std::cout;

//write using statements

int main() 
{
	int Option;
	cout<<"MENU"<<"\n";
	cout<<"Option 1-Factorial"<<"\n";
	cout<<"Option 2-Greates Common Divisor"<<"\n";
	cout<<"Option 3-Exit"<<"\n";

	cout<<"Choose an Option: ";
	cin>>Option;
	cout<<Option<<"\n";

	if (Option == 1)
	{
	
		auto Number = 0;
		auto result = 0;

		cout<<"Enter a Number: ";
		cin>>Number;

		result = factorial(Number);

		cout<<result<<"\n";

		return 0;
	}

	if (Option == 2)
	{
	
		auto Number1 = 0;
		auto Number2 = 0;
		auto result = 0;

		cout<<"Enter a Number: ";
		cin>>Number1;

		cout<<"Enter a Second Number: ";
		cin>>Number2;

		result = gcd(Number1, Number2);

		cout<<result<<"\n";

		return 0;
	}

	else if (Option == 3)
	{
		return 0;
	}
}
