#include <stdio.h>

void main(){

	int op[10][3];

//Open file in write Mode

FILE *file = fopen("output.txt","w");

//Check if file is open or not

if(file== NULL){
	printf("! Error in opening File\n");
	goto END;
}

//write
	for(int i=0; i<10;i++){
		
		for(int j=0; j<3;j++){
			op[i][j] = i;
		}
	
	}
	
//Read or Write to file

	for(int j=0; j<3;j++){
	
		for(int i=0; i<10;i++){
			printf("%d ",op[i][j]);
			fprintf(file,"%d ",op[i][j]);
		}	
		printf("\n");
		fprintf(file,"\n");
	}
	
fclose(file);
	
END:
}
