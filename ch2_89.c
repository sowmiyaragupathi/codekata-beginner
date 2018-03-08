//print string in lexograhical order
#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[100],temp[100];
    int i,j,k;
    scanf("%[^\n]s",a);
    int n=strlen(a);
   for(i=0;i<n ;i++)
   {
   	for(j=i+1;j<n;j++)
   	{
   	if(a[i]  > a[j])
   	{
   		temp[k]=a[i];
   		a[i]=a[j];
   		a[j]=temp[k];
   	}
   }}
   printf("%s",a);
    return 0;
}
