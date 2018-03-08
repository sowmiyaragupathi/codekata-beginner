//given n and k th element and print only the kth element
#include <stdio.h>
int main(void)
{
	int a[200],n,k,i;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("%d",a[i]);
			break;
		}
	}
  
     return 0;
}
