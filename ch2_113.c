//count whether the given no is in the array
#include <stdio.h>
int main(void)
{
int n,k,a[100],i,temp=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]==k)
	{
	temp++;
	}
}
	printf("%d",temp);
return 0;
}
