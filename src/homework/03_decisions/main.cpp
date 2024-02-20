//write include statements
#include<iostream>
#include "decisions.h"
using std::cin; using std::cout; using std::string;

int main() 
{
	while ( 1 == true)
	{
	int Option;
	cout<<"MENU"<<"\n";
	cout<<"Option 1-Letter grade using if"<<"\n";
	cout<<"Option 2-Letter grade using switch"<<"\n";
	cout<<"Option 3-Exit"<<"\n";

	cout<<"Choose an Option: ";
	cin>>Option;
	cout<<Option<<"\n";

	if (Option == 1)
	{
	
		auto Grade = 0;
		string result = "";

		cout<<"Enter a Grade Between 0 and 100: ";
		cin>>Grade;

		result = get_letter_grade_using_if(Grade);

		cout<<result<<"\n";

		return 0;
	}
	
	else if (Option == 2)
	{
	
		auto Grade = 0;
		string result = "";

		cout<<"Enter a Grade Between 0 and 100: ";
		cin>>Grade;

		result =  get_letter_grade_using_switch(Grade);

		cout<<result<<"\n";

		return 0;
	}

	else if (Option == 3)
	{
		break;
	}
	}
}