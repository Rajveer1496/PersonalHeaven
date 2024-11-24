#include <stdio.h>

void main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	c = b;
	b = a;
	a = c;
	printf("A = %d, B = %d",a,b);
	

}
