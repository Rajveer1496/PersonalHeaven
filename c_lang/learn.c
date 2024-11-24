#include <stdio.h>

float fac(float n){

	if(n==0 || n==1){
	return 1;
	}
	else{
		return (n*(fac(n-1)));
	}
}

void main(){
	int a;
	scanf("%d",&a);
	printf("Factorial is %0.0f\n",fac((float)a));
}
