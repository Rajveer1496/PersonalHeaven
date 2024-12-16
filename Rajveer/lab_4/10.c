#include <stdio.h>

//Name: Rajveer Chaudhari
//Roll NO: 24

void main(){
	int a;
	printf("Enter The number\n");	
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("Sunday\n");
			break;
	
		case 2:
			printf("Monday\n");
			break;
			
		case 3:
			printf("Tuesday\n");
			break;
			
		case 4:
			printf("Wednesday\n");
			break;
			
		case 5:
			printf("Thursday\n");
			break;
			
		case 6:
			printf("Friday\n");
			break;
			
		case 7:
			printf("Saturday\n");
			break;
	
		default:
			printf("Enter Valid No of day\n");
	}
}
