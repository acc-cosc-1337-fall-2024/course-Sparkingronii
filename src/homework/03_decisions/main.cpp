//write include statements
#include<iostream>
#include "decisions.h"
using std::cin; using std::cout; using std::string;

int main() 
{
	int Option;
	cout<<"1-Letter grade using if"<<"\\n";
	cout<<"2-Letter grade using switch"<<"\\n";
	cout<<"3-Exit"<<"\\n";

	cout<<"Choose an Option: ";
	cin>>Option;

	if (Option == 1)
		{
	
		auto Grade = 0;
		string result = "";

		cout<<"Enter a Grade: ";
		cin>>Grade;

		result = get_letter_grade_using_if(Grade);

		cout<<result<<"\n";

		return 0;
		}
	
	else if (Option == 2)
		{
	
		auto Grade = 0;
		string result = "";

		cout<<"Enter a Grade: ";
		cin>>Grade;

		result =  get_letter_grade_using_switch(Grade);

		cout<<result<<"\n";

		return 0;
		}

	else if (Option == 3)
	{
		return 0;
	}

}