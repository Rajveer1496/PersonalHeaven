#include <stdio.h>

int sum(int d, int e){
	printf("%d\n%d\n",d,e);
	return 0;
}

void main(){
	int a=1,b=2,c;
	//c = sum(a,b);
	//printf("%d\n",c);
	sum(b,a);
}
