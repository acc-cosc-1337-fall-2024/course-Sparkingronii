#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double get_sales_tax(double meal_amount)
{

	double tax = meal_amount * 0.0675;
	
	return tax;

}

double get_tip_amount(double meal_amount, double tip_rate)
{
	double tip = meal_amount * tip_rate;

	return tip;
}
