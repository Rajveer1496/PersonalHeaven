#include <stdio.h>

void main(){
	
	int op[10][3];
	
	FILE *file = fopen("output.txt","r");
	
	//fscanf(file,"%d",&op[3][2]);
	
	//printf("%d\n",op[3][2]);
	
//store file to array
	for(int j=0; j<3; j++){
		
		for(int i=0; i<10; i++){
			fscanf(file,"%d",&op[i][j]);
		
		}
	
	}

//Display array
	for(int j=0; j<3; j++){
		
		for(int i=0; i<10;i++){
			printf("%d ",op[i][j]);
		}
	printf("\n");
		
	}

}
