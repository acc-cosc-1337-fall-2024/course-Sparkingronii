#include "recursion.h"
using std::cout;

//Write code for recursive display function
void say_hello()
void say_hello(int num)
{

    if(num == 0)
    {
        cout<<"Base case\n";
        return;
    }

    cout<<"Hello\n";

    say_hello();
    cout<<"Load to stack\n";
    say_hello(num-1);
    cout<<"Unload from stack\n";
}

//Write code for recursive factorial
//Write code for recursive factorial
/*
5*4*3*2*1=
*/
int recursive_factorial(int num)
{
    int f;//track num * r
    int r; //track return value of function

    if(num == 0)
    {
        cout<<"Base case\n";
        return 1;
    }

    cout<<"Load to stack "<<num-1<<"\n";
    r = recursive_factorial(num-1);
    //execute once the base case is reaached///unwinding/unloading functions from the stack
    f = num * r;
    cout<<"Unload from stack "<<num<<" r "<<r<<" f "<<f<<"\n";

    return f;
}