//find the first 5 multiples of a given  number

#include<stdio.h>
int main(void)
{
   int a,i,b=5,ans=1,c=0;
   scanf("%d",&a);
   if(a==0 && a<=-1)
   {
   	printf("%d",c);
   }
   else
   {
	for(i=1;i<=b;i++)
	{
		ans=a*i;
		printf("%d ",ans);
	}
   }
   return 0;
}
