#include <stdio.h>

float convert(float amount,float currency_1,float currency_2);

void main(){
float currency[2][10] = {{1,2,3,4,5,6,7,8,9,10},{0.012,1,0.71,0.0064,1.06,0.65,1.13,1.27,0.59,0.14}};

char name[10][4] = {"INR","USD","CAD","JPY","EUR","AUD","CHF","GBP","NZD","CNY"};

printf("Welcome to Currency Converter\nChoose the currency to convert from:\n\n");
printf("1.INR\n2.USD\n3.CAD\n4.JPY\n5.EUR\n6.AUD\n7.CHF\n8.GBP\n9.NZD\n10.CNY\n\nChoose Number: ");

int c1,c2;
float amount;

scanf("%d",&c1);

printf("Enter the amount: ");
scanf("%f",&amount);

printf("\nChoose the currency to convert to:\n\n");
printf("1.INR\n2.USD\n3.CAD\n4.JPY\n5.EUR\n6.AUD\n7.CHF\n8.GBP\n9.NZD\n10.CNY\n\nChoose Number: ");
scanf("%d",&c2);
	
//printf("%0.2f %s = %0.2f %s\n",amount, name[c1-1], convert(amount,currency[1][c1-1],currency[1][c2-1]), name[c2-1]);
printf("%0.2f %s = %0.2f %s\n",amount, name[c1-1], amount*(currency[1][c1-1])/(currency[1][c2-1]), name[c2-1]);
}

float convert(float amount,float currency_1,float currency_2){
	return (amount)*((currency_1)/(currency_2));
}

