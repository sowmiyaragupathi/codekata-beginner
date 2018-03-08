//check the k th element  in the array,if it is true print the number
#include <stdio.h>
int main(void)
{
int n,k,a[100],i,j,temp;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i]==k)
	printf("%d",a[i]);
}

return 0;
}
