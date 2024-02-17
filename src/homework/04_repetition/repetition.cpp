//add include statements
#include<iostream>
#include "repetition.h"

//add function(s) code here

int factorial(int num)
{
    auto start = 1;
    auto sum = 1;

    while(num > 1)
    {
        sum *= start;
        start --;
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