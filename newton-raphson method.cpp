#include<stdio.h>
#include<math.h>
#define e 0.001
#define f(x) (x*x-4*x+4)
#define df(x) (2*x-4)
main()
{
float x0,x1;
float f1,f0,df0;
int i=0;
printf("\n enter value of x0: ");
scanf("%f",&x0);

do
{
	f0=f(x0);
	df0=df(x0);
	x1=x0-(f0/df0);
	f1=f(x1);
	x0=x1;
	i++;
	printf("\n how many times the iteration is going on: %d",i);
	printf("\n the value of root is: %f",x1);
	printf("\n the value of function is: %f",f1);
	
}
while(fabs(f1)>e);

printf("\n\n final root is: %f",x1);
}




	

