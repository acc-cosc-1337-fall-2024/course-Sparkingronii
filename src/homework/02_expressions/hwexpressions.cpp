#include "hwexpressions.h"

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here
double tax_amount(double get_sales_tax, double tax_rate)
{
	tax_rate = 0.0675;

	double tax_amount = get_sales_tax * tax_rate;

	return tax_amount;


}

double tip_amount(double meal_amount, double tip_rate)
{
	double tip_amount = meal_amount * tip_rate;

	return tip_amount;
}
