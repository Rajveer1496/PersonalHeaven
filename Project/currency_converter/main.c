#include <stdio.h>
 

void main(){

//for(int i=1;i>0;){

float cur[2][10] = {{1,2,3,4,5,6,7,8,9,10},{0.012,1,0.71,0.0064,1.06,0.65,1.13,1.27,0.59,0.14}};
float curr[1000][2];
//        i   j
//        i=1 --> Serial No
//        i=2 --> Value in USD


char name[10][4] = {"INR","USD","CAD","JPY","EUR","AUD","CHF","GBP","NZD","CNY"};
char namee[1000][4];
//         i  j
//         i--> Serial No

// Load Currency Value from file

FILE *data = fopen("data.txt","r");

for(int i=0; i<2;i++){
	for(int j=0; j<1000;j++){
		namee[i][j]=data[i][j];
	}
}

fclose(data);

//Load Name

FILE *namei = fopen("name.txt","r");

for(int i=0; i<4;i++){
	for(int j=0; j<1000;j++){
		namee[i][j]=namei[i][j];
	}
}

fclose(namei);


printf("Welcome to Currency Converter\nChoose the currency to convert from:\n\n");
printf("1.INR\n2.USD\n3.CAD\n4.JPY\n5.EUR\n6.AUD\n7.CHF\n8.GBP\n9.NZD\n10.CNY\n\nChoose Number: ");

int c1,c2;
float v1;

scanf("%d",&c1);

printf("Enter the amount: ");
scanf("%f",&v1);

printf("\nChoose the currency to convert to:\n\n");
printf("1.INR\n2.USD\n3.CAD\n4.JPY\n5.EUR\n6.AUD\n7.CHF\n8.GBP\n9.NZD\n10.CNY\n\nChoose Number: ");
scanf("%d",&c2);

float o;
	o = (v1)*((cur[1][c1-1])/(cur[1][c2-1]));
		
	printf("%0.2f %s = %0.2f %s\n",v1,name[c1-1],o,name[c2-1]);

	
//Currency convert start
/*
1. Choose to convert from and convert to
2. Enter Amount
3. Display conversion */


//Currency convert End


	
//Write to file 
//}
}
