#include<stdio.h>

int multi(int a,int b,int i);

void main(){
	printf("Name: Rajveer Chaudhari\nRoll NO: 202411024\n");
	int a,c;
	scanf("%d",&a);
	multi(a,a,1);
}

int multi(int a,int b,int i){
	printf("%d X %d = %d\n",b,i,a);
	if(a == b*10){
		return 0;
	}
	else{a = a+b;
		i=i+1;
		multi(a,b,i);
	}
}
