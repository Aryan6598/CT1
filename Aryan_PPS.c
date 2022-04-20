#include <stdio.h>
int main()
{
int amount_given,bill_amount;
int quotient,rem;
scanf("%d %d",&amount_given,&bill_amount);
quotient=amount_given/bill_amount;
rem=amount_given%bill_amount;
printf("Value of the quotient is =%d",quotient);
printf("\nValue of the remainder is =%d",rem);
	return 0;
}