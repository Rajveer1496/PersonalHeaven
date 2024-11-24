#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//colours

void red(){
	printf("\033[0;31m");
}

void yeallow(){
	printf("\033[0;33m");
}

void green(){
	printf("\033[0;32m");
}

void black(){
	printf("\033[0;30m");
}

void blue(){
	printf("\033[0;34m");
}

void purple(){
	printf("\033[0;35m");
}

void cyan(){
	printf("\033[0;36m");
}

void white(){
	printf("\033[0;37m");
}

void reset(){
	printf("\033[0m");
}


//MAIN

void main(){
system("clear");

/*
//Binary to text file start->
FILE *cred_txt,*cred_bin;
char ch;
//Binary to text End <- */



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
	int a,b,c,d,press,U_no,ye;
	char xe;
	
//Load all Credentials from file

	for(int j=0; j<3; j++){
		for(int i=0; i<1000; i++){
			fscanf(file,"%d",&atm[i][j]);
		}
	}

//Decrypt Data (shift 2 bits right)


if(atm[0][0] != 7){
	for(int i=0;i<1000;i++){
	
		for(int j=0; j<3; j++){
			int enc;
			int ENC;
			enc = atm[i][j];
			
			ENC = enc << 2;
			
			enc =sqrt(ENC);
			
			ENC = enc >> 2;
			
			atm[i][j] = ENC;	
		}
	}
}



//ACTION START
start:
white();
printf("PRESS:\n");
cyan();
printf("1->Check Balance\n");
green();
printf("2->Deposit/Withdraw\n");
yeallow();
printf("3->Register New User\n");
red();
printf("0->Exit\n");

blue();
printf("Option: ");
scanf("\n%d",&press);
system("clear");


//Balance Check

	if(press == 1){
	balcheck:
	cyan();
	printf("Check balance\nEnter User No: ");
	scanf("%d",&U_no);
	
		for(int i=0 ; i<998 ; i++){
			if(U_no == atm[i][0]){
				printf("Balance: %d\n",atm[i][2]);
				break;
			}
			/*else{
				system("clear");
				red();
				printf("! No User found With That User Number !\n");
				goto start;
			}*/
		}
	printf("Press Enter to Continue\n");
	scanf("%d",&ye);
	system("clear");
	goto start;
	}
	
	
//Deposit / Withdraw Money	
	else if(press == 2){
	depow:
	green();
	int bal;
	
	int U_no,U_pass;
	printf("Deposit/Withdraw\n");
	printf("Enter Your User NO: ");
	scanf("%d",&U_no);
	
	pass_check:
	green();
	for(int i=0 ; i<998 ; i++){
		
		//passcheck
		if(atm[i][0]== U_no){
			printf("Enter your Password: ");
			scanf("%d",&U_pass);
			system("clear");
			
				//Withdraw or Deposit
				if(U_pass==atm[i][1]){
					printf("To Deposit Just Enter Number,\nTo Withdraw Enter Amount as -ve Number (e.g -150)\n");
					scanf("%d",&bal);
					atm[i][2] = atm[i][2] + bal;
					printf("New Balance: %d\n",atm[i][2]);
				}

				else{
					red();
					printf("\n! Enter Valid Password !\n");
					reset();
					goto pass_check;
				}
		}
		
		/*else{
				red();
				system("clear");
				printf("! No User found With That User Number !\n");
				goto start;
		
			}*/
	}
	
	
	printf("Press Enter to Continue\n");
	scanf("%d",&ye);
	system("clear");
	goto start;
	}
	
	
//Register New user	
	else if(press == 3){
		reg:
		yeallow();
		for(int i=0 ; i<998 ; i++){
	
			if(atm[i][0] == 0){
				printf("Create New User No: ");
				int reg;
				scanf("%d",&reg);
			//Scan for overlapping start ->
			
			for(int i=0 ; i<998 ; i++){
				if(reg == atm[i][0]){
					red();
					printf("! User Number already Exists, Please Chose Different Number !\n");
					reset();
					goto reg;
				}
			}		
			//Scan for Overlapping End <-
			
				atm[i][0] = reg;
				
				printf("Create Password: ");
				scanf("%d",&atm[i][1]);
				atm[i][2]=3;
				break;
			}	
		}
	system("clear");
	goto start;
	}
	
	
	else if(press == 0){
		system("clear");
		goto E_ND;
	}
	
	
	else{
		system("clear");
		red();
		printf("Chose Desired Option\n");
		goto start;
	}




E_ND:
//ACTION END

fclose(file);	

int bits=2;

//Encrypt All data {Shifting all data to 2 bit left}

for(int i=0;i<1000;i++){

	for(int j=0; j<3; j++){
		int enc;
		int ENC;
		enc = atm[i][j];
		
		ENC = enc << 2;
		
		enc = ENC*ENC;
		
		ENC = enc >> 2;
		
		atm[i][j] = ENC;	
	}
}


//Store all credentials to file

FILE *file2 = fopen("cred.txt","w");

	for(int j=0; j<3; j++){
		
		for(int i=0; i<1000; i++){
			fprintf(file,"%d ",atm[i][j]);
		}
	fprintf(file,"\n");
	}


fclose(file2); //Closing File


/*
//Text to Binary Start->
cr_t:

cred_txt = fopen("cred.txt","r");

if(cred_txt == NULL){
	printf("Error While opening Text Credential\n");
	goto cr_t;
}


cr_b:
cred_bin = fopen("cred.bin","wb");

if(cred_bin==NULL){
	printf("Error While opening Bin Credential\n");
	goto cr_b;
}

while((ch = fgetc(cred_txt)) != EOF ){ //Basically Reads Whole file one by one char and stores that one char in ch, Untill Text ends in File

	fwrite(&ch, sizeof(char),1,cred_bin);
}

fclose(cred_txt);
fclose(cred_bin);


//Erase Text File

//Binary to Text End <- */

END:
	
system("clear");
}


