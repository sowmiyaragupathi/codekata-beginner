//find the k th position in the array
#include <stdio.h>
int main(void)
{
int n,k,a[100],i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
if(k<=n)
{
for(i=k;i<n;i++)
{
	printf("%d",a[i]);
	break;
}
}
else
printf("out of array");
return 0;
}
