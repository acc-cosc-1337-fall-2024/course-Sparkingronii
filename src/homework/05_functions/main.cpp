#include<iostream>
#include "func.h"
#include<string>
using std::cin; using std::cout; using std::string;

int main() 
{
while(true)
	{
		int Option;
		cout<<"MENU"<<"\n";
		cout<<"Option 1-Get GC Content"<<"\n";
		cout<<"Option 2-Get DNA Complement"<<"\n";
		cout<<"Option 3-Exit"<<"\n";

		cout<<"Choose an Option: ";
		cin>>Option;
		cout<<Option<<"\n";

		if (Option == 1)
		{
	
			string DNA = 0;
			int GC = 0;

			cout<<"Enter DNA Sequence: ";
			cin>>DNA;

			GC = get_gc_content(DNA);

			cout<<"The GC Content is: "<<GC<<"\n";

			return 0;
		}

		if (Option == 2)
		{
	
			string DNA = 0;
			string DNA_Reverse = 0;
			string DNA_Complement = 0;

			cout<<"Enter DNA Sequence: ";
			cin>>DNA;

			DNA_Reverse = reverse_string(DNA);

			DNA_Complement = get_dna_complement(DNA_Reverse);

			cout<<"The DNA Complement is: "<<DNA_Complement<<"\n";

			return 0;
		}

		else if (Option == 3)
		{
				break;
		}
	}
	return 0;
}
