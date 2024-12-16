#include<stdio.h>

void main(){

printf("Name: Rajveer Chaudhari\nRoll No:202411024\n");

int a[2][3][2];
int b[2][3][2];



for(int i=0; i<2;i++){

for(int j=0; j<3; j++){

for(int k=0; k<2; k++){

printf("Enter the value of a[%d][%d][%d]\n",i,j,k);
scanf("%d",&a[i][j][k]);

}
printf("\n");
}
printf("\n");
}

for(int i=0; i<2;i++){

for(int j=0; j<3; j++){

for(int k=0; k<2; k++){

printf("Enter the value of b[%d][%d][%d]\n",i,j,k);
scanf("%d",&b[i][j][k]);

}
printf("\n");
}
printf("\n");
}

printf("3D matrics is a \n");

for(int i=0; i<2;i++){

for(int j=0; j<3; j++){

for(int k=0; k<2; k++){

printf("%d ", a[i][j][k]);

}
printf("\n");
}
printf("\n");
}


printf("3D matrics is b \n");

for(int i=0; i<2;i++){

for(int j=0; j<3; j++){

for(int k=0; k<2; k++){

printf("%d ", b[i][j][k]);

}
printf("\n");
}
printf("\n");
}

printf("And sum of two matrics is\n");

for(int i=0; i<2;i++){

for(int j=0; j<3; j++){

for(int k=0; k<2; k++){

printf("%d ", a[i][j][k] + b[i][j][k]);

}
printf("\n");
}
printf("\n");
}

}