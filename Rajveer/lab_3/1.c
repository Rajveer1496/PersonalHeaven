#include <stdio.h>

void main(){

	int a,b;
	//int c;
	float c;
	printf("Enter value of First NO:\n");
	scanf("%d",&a);
	printf("Enter value of Second NO:\n");
	scanf("%d",&b);
	c = a/b;
	//printf("Division fo Two no is %d\nModulo Division of Two no is %d\n",c,(a%b));
	printf("Division fo Two no is %f\nModulo Division of Two no is %d\n",c,(a%b));


}
