/*****************************************************************
*
* Name: Loan calculator
* Purpose: Calculates remaining loan after 3 payments
* Author: Minbu5
*
*****************************************************************/

#include <stdio.h>


int main (void)
{
	float  amount, year_rate, mon_rate, mon_pay;
	float aft_1_pay, aft_2_pay, aft_3_pay;
	
	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate in percents: ");
	scanf("%f", &year_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &mon_pay);
	
	// year_rate / 100 / 12 year_rate is user rate and /100 to %, /12 to month rate
	aft_1_pay = (amount - mon_pay + amount * year_rate / 100 / 12); 
	aft_2_pay = (aft_1_pay - mon_pay + aft_1_pay * year_rate / 100 / 12);
	aft_3_pay = (aft_2_pay - mon_pay + aft_2_pay * year_rate / 100 / 12);
	
	
	printf("Balance remaining after first payment: $%.2f\n", aft_1_pay);
	printf("Balance remaining after second payment: $%.2f\n", aft_2_pay);
	printf("Balance remaining after third payment: $%.2f\n", aft_3_pay);
	
	return 0;

}