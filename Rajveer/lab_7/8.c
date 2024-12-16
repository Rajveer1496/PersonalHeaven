#include<stdio.h>

void main(){

printf("Name: Rajveer Chaudhari\nRoll No:202411024\n");

int a[2][3];

for(int i=0; i<2;i++){

for(int j=0; j<3; j++){

printf("Enter the value of a[%d][%d]\n",i,j);
scanf("%d",&a[i][j]);

}
printf("\n");
}

printf("Matrics is\n");

for(int i=0; i<2;i++){

for(int j=0; j<3; j++){

printf("%d ",a[i][j]);

}
printf("\n");
}

}