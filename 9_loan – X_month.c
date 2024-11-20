/*****************************************************************
*
* Name: Loan calculator
* Purpose: Calculates remaining loan after each month
* Author: Minbu5
*
*****************************************************************/

#include <stdio.h>


int main (void)
{
	float  amount, year_rate, mon_rate, mon_pay;
	float aft_1_pay, aft_2_pay, aft_3_pay;
	int month = 1;
	
	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate in percents: ");
	scanf("%f", &year_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &mon_pay);
	
	while (amount > 0)
	{
		
		amount = (amount - mon_pay + amount * year_rate / 100 / 12);
		if (amount > 0)
		{
			printf("Balance remaining after %d payment: $%.2f\n", month, amount);
		}
		month++;

	}
	

	
	return 0;

}