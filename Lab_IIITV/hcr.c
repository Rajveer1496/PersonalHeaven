#include <stdio.h>

void main(){

	int a=0;
	
	for(int i=3; i<100;i++){
		
		for(int j=2; j<i; j++){
			
			if(i%j != 0){
				a = a+1;
			}
		
		}
		
	}
	
	printf("Total prime: %d\n", a+1);

}
