#include <stdio.h>
int main()
{
	float bp,da,hra,grpay;
	printf("\nEnter Basic Salary of User:");
	scanf("%f",&bp);
	da= 0.4*bp;
	hra= 0.2*bp;
	grpay = bp+da+hra ;
	
		printf("Basic Salary of User = %f\n",bp);
		printf("Dearness Allowance = %f\n",da);
		printf("House Rent Allowance = %f\n",hra);
		printf("Gross Pay of User isa %f\n",grpay);
		return 0 ;		
		
			}
