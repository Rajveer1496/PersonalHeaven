#include <stdio.h>

void main(){

//Opening File

FILE *file = fopen("cred.txt","w");

	int atm[1000][3];
/*      	 i   j
	
	 i--> User Number
	 j=1 --> Pass
	 j=2 --> Money
	 
*/
	int a,b,c,d;
	
	

//one time run to set all values to zero
	if(atm[1000][0] != 0){
		for(int i=0 ; i<1000 ; i++){
			atm[i][0] = 0;
		}
	}
	
//Store all credentials to file

	for(int j=0; j<3; j++){
		
		for(int i=0; i<1000; i++){
			fprintf(file,"%d ",atm[i][j]);
		}
	fprintf(file,"\n");
	}


fclose(file); //Closing File
	
}
