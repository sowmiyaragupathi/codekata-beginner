//average of  numbers in aaray

#include<stdio.h>

int main(void)

{
	int a[10],i,n;
	float avg,sum=0.0;
	scanf("%d",&n);
	for(i=0;i<n;i++)

	{

		scanf("%d",&a[i]);

	}

	for(i=0;i<n;i++)
	{
	sum=sum+a[i];	
	}
	avg=sum/n;
	printf("%.2f",avg);
	return 0;

}
