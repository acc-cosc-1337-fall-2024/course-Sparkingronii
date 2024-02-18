//add include statements
#include<iostream>
#include "repetition.h"

//add function(s) code here

int factorial(int num)
{
    //auto start = 1;
    auto sum = 0;

    for( int i =1; i <= num; ++i)
    {
        sum *= i;
        //start --;
    }

    return sum;
}

int gcd(int num1, int num2)
{
    if (num1 == num2)
    return num1;

    else if(num1 > num2)
    return gcd(num1 - num2, num2);

    else //if(num1 < num2)
    return gcd(num1, num2 - num1);
}