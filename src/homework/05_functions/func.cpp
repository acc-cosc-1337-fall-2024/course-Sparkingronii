//add include statements
#include<iostream>
#include<string>
using std::string;

//add function code here

double get_gc_content(string DNA)
{
int length = DNA.size();

//char LetterG = 'G';
int countG = 0;
for (int i = 0; i < length; i++)
    {
        if (DNA[i] ==  'G')
        {
            ++ countG;
        }
    } return countG;

//char LetterC = 'C';
int countC = 0;
for (int i = 0; i < length; i++)
    {
        if (DNA[i] ==  'C')
        {
            ++ countC;
        }
    } return countC;

double GC_Content = (countG + countC) / length;
return GC_Content;
}


string reverse_string(string DNA)
{
   int length = DNA.size();
   int rev = length - 1;
   for(int i=0; i<(length/2); i++)
   {
        char temp = DNA[i];
        DNA[i] = DNA[rev];
        DNA[rev] = temp;
        rev = rev-1;
   }
    return DNA;
}


string get_dna_complement(string DNA)
{
//int length = DNA.size();
   //int rev = length - 1;
   //for(int i=0; i<(length/2); i++)
   //{
        //char temp = DNA[i];
        //DNA[i] = DNA[rev];
        //DNA[rev] = temp;
        //rev = rev-1;
   //}
int length = DNA.size();
for(int i=0; i < length; i++)
    {
        if(DNA[i] == 'A')
        DNA[i] = 'T';

        else if(DNA[i] == 'T')
        DNA[i] = 'A';

        else if(DNA[i] == 'C')
        DNA[i] = 'G';

        else if(DNA[i] == 'G')
        DNA[i] = 'C';

        
    }
    return DNA;
}