#include <stdio.h>
#include<string.h>
#include<math.h>
//Name: Rajveer Chaudhari
//Roll NO: 24

void main(){
	printf("Name: Rajveer Chaudhari\nRoll NO: 24\n");
	int a,b,c,r,r1,r2,d,d1,d2,i;
	char str[1000];
	printf("Enter The number two times\n");
	//fgets(str,no_digits,stdin);
	fgets(str, 1000, stdin);
	scanf("%d",&a);
	
	b= strlen(str)-1;
	printf("%ld %d\n", strlen(str)-1,a);
	
	c = pow(10,b);

// Remainder
	
for(i=1,i){
		r1 = a%pow(10,i);
		r2 = a%pow(10,i+1);
		
		d = (r2-r1)/pow(10,i);
		i++;
		
	}
	
	printf("%d %s",c,str);
	
}
