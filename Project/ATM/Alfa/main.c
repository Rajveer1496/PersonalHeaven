#include <stdio.h>

void main(){

//Opening File

FILE *file = fopen("cred.txt","r");

if(file == NULL){
	printf("Error while opening file\n");
	goto END;
}

	int atm[1000][3];
/*      	 i   j
	
	 i--> User Number
	 j=1 --> Pass
	 j=2 --> Money
	 
*/
	int a,b,c,d;
	
//Load all Credentials from file

	for(int j=0; j<3; j++){
		for(int i=0; i<1000; i++){
			fscanf(file,"%d",&atm[i][j]);
		}
	}

//one time run to set all values to zero
	/*if(atm[1000][0] != 0){
		for(int i=0 ; i<1000 ; i++){
			atm[i][0] = 0;
		}
	}*/
	
//Register New user
	
	
	for(int i=0 ; i<998 ; i++){
	
		if(atm[i][0] == 0){
			printf("Create New User No:\n");
			scanf("%d",&atm[i][0]);
	//Check if user no is not overlapping
			printf("Create Password\n");
			scanf("%d",&atm[i][1]);
			atm[i][2]=3;
			break;
		}	
	}

//Deposit / Withdraw Money
	int U_no,U_pass;
	printf("Deposit/Withdraw\n");
	printf("Enter Your User NO\n");
	scanf("%d",&U_no);
	
	pass_check:
	for(int i=0 ; i<998 ; i++){
		
		//passcheck
		if(atm[i][0]== U_no){
			printf("Enter your Password\n");
			scanf("%d",&U_pass);
			
				//Withdraw or Deposit
				if(U_pass==atm[i][1]){
					printf("Enter Amount to Deposit or Withdraw\n");
					scanf("%d",&atm[i][2]);
				}

				else{
					printf("Enter Valid Password\n");
					goto pass_check;
				}
		}
	}
	
//Balance Check
	printf("Check balance\n Enter User No\n");
	scanf("%d",&U_no);
	U_no++; //RECHECK
	
	for(int i=0 ; i<998 ; i++){
		if(U_no == atm[i][0]){
			printf("Balance: %d\n",atm[i][2]);
			break;
		}
	
	}
	
fclose(file);	

//Store all credentials to file

FILE *file2 = fopen("cred.txt","w");

	for(int j=0; j<3; j++){
		
		for(int i=0; i<1000; i++){
			fprintf(file,"%d ",atm[i][j]);
		}
	fprintf(file,"\n");
	}


fclose(file2); //Closing File

END:
}

