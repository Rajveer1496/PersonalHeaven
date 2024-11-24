#include <stdio.h>

void main(){
	
	int a,b,c=1;
	printf("Enter the no for which you want the Multiplication Table:\n");
	scanf("%d",&a);
	b=a;
	while(c<=10){
		printf("%d X %d = %d\n",b,c,a);
		a=a+b;
		c=c+1;
	
	}


}
