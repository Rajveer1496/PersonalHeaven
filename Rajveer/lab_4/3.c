#include <stdio.h>

//Name: Rajveer Chaudhari
//Roll NO: 24

void main(){
	int a,b;
	printf("Enter Two numbers");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("First No = %d, Second No = %d\n",a,b);

}
