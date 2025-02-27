#include <stdio.h>


int fast(int a, int b){

	if(n == 0){
		return 0;
	}

	if(n == 1){
		return a;
	}

	int half = fast(a, n/2);

	if(n%2 == 0){
		return half*half;
	}
	return a*half*half;
	
}

void main(){
	
		
}
