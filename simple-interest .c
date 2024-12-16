#include <stdio.h>
int main()
{
 float p,r,t,si;
 printf("Enter Principal : ");
scanf("%f",&p);
printf("Enter Rate :");
scanf("%f",&r);
printf("Enter Time :");
scanf("%f",&t);
 si = (p*r*t)/100;
 printf("Simple interest is : %f",si);


	return 0;
}
