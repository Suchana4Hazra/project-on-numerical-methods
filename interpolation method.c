#include<stdio.h>
main()
{
	int n,i,j;
	float x[20],y[20],p,sum=0.0,term;
	printf("\n enter no. of terms: ");
	scanf("%d",&n);
	printf("\n enter the x values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	printf("\n enter the y values:\n");	
		for(i=0;i<n;i++)
	{
		scanf("%f",&y[i]);
	}
	
	
	printf("\n enter the value of x for which you want to calculate the value of corresponding y: ");
	scanf("%f",&p);
	
	for(i=0;i<n;i++)
	{
		term=1;
		for(j=0;j<n;j++)
		{
		if(i!=j)
		
			term=term*((p-x[j])/(x[i]-x[j]));
	}
	sum=sum+y[i]*term;
}
printf("\n the y value of x=%f is %f",p,sum);
	
	

}

