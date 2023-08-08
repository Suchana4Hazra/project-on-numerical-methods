#include<stdio.h>
#include<math.h>
#define e 2.718281828
#define f(x) (pow(e,x)*log(x))
main()
{
	int i,n;
	float a,b,h,integral,x,sum=0;
	printf("\n enter the no. of divisions: ");
	scanf("%d",&n);

	printf("\n enter the initial value: ");
	scanf("%f",&a);
		printf("\n enter the terminal value: ");
	scanf("%f",&b);
	
	{
	h=fabs((b-a)/n);
	for(i=0;i<n;i++)
	{
		x=(a+i*h);
		sum=sum+f(x);
	}
	integral=(h/2)*(f(a)+f(b)+2*sum);
	
}

	printf("\n the integral is %f",integral);
	
}

