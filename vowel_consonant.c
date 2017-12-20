#include <stdio.h>
int main(void)
{
	char a,b;
	printf("\nenter a  character:");
	scanf("%c",&a);
	b=((a=='a'&&'A')||(a=='e'&&'E')||(a=='i'&&'I')||(a=='o'&&'O')||(a=='u'&&'U'))?printf("%c is vowel",a):printf("%c is consonant",a);
            return 0;
}
