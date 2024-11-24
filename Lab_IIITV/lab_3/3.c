#include <stdio.h>

void main(){

	int a,b,c,d,i;
	printf("Enter Value of first no:\n");
	scanf("%d",&a);
	printf("Enter value of second no:\n");
	scanf("%d",&b);
	printf("Enter value of third no:\n");
	scanf("%d",&c);
		if(a>b){
			d=a;
			i=1;
		}
		else{
			d=b;
			i=2;
		}
	
		
		if(d>c){

			if(i==1){
				printf("First No is Biggest\n");
			}
			else{
				printf("Second No is Biggest\n");
			}
			
		}
		else{
			printf("Third No is Biggest\n");
		}
}
