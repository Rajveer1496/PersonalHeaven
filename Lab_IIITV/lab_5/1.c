#include <stdio.h>

//Name: Rajveer Chaudhari
//Roll NO: 24

void main(){
	printf("Name:Rajveer Chaudhari \nRoll No: 24\n");	
	int a,i;
	printf("Enter the Number for which you want the table\n");
	scanf("%d",&a);
//Using for loop

	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n",a,i,a*i);
	}
	printf("\n");
	
//Using While loop
	i=1;
	while(i<=10){
		printf("%d X %d = %d\n",a,i,a*i);
		i++;
	}
	printf("\n");
	
//Using Do while loop
	i=1;
	do{
	printf("%d X %d = %d\n",a,i,a*i);
	i++;
	}while(i<=10);


}

