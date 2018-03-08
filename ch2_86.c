#include <stdio.h>
#include<string.h>
int main(void) {
	char a[1000];
	int i,count=0,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			count=1;
			break;
		}
	}
	if(count==1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
