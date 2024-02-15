//write include statement for decisions header
#include "decisions.h"
#include<string>
using std::string;

//Write code for function(s) code here

string get_letter_grade_using_if(int Grade)
{
    string result = "";

    if(Grade >= 90 && Grade <= 100)
    {
        result = "A";
    }
    else if(Grade >= 80 && Grade <= 89)
    {
        result = "B";
    }
    else if(Grade >= 70 && Grade <= 79)
    {
        result = "C";
    }
    else if(Grade >= 60 && Grade <= 69)
    {
        result = "D";
    }
    else if(Grade >= 00 && Grade <= 59)
    {
        result = "F";
    }
    else
    {
        result = "Out of Range";
    }

    return result;
}

string get_letter_grade_using_switch(int Grade)
{
    string result = "";

    switch (Grade)
    {
        case 90 ... 100:
            result = "A";
            break;
        case 80 ... 89:
            result = "B";
            break;
        case 70 ... 79:
            result = "C";
            break;
        case 60 ... 69:
            result = "D";
            break;
        case 00 ... 59:
            result = "F";
            break;
        default:
            result = "Out of Range";
            break;
    }
    return result;
}