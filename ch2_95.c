//simple interest program
#include <stdio.h>
int main(void)
{
	int p,t,r;
	int si;
	scanf("%d %d %d",&p,&t,&r);
	si=(p*t*r)/100;
	printf("%d",si);
  return 0;
}
