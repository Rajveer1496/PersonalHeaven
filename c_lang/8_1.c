#include<stdio.h>

void main(){

int arr[3][3];
int k;

int *ptr = arr;

for(int i=0; i<3; i++){

    for(int j=0; j<3; j++){
        printf("Enter Value of Element [%d][%d]\n",i,j);
        scanf("%d", (ptr + i*3 +j));
    }
}

    for(int i=0; i<3; i++){

    for(int j=0; j<3; j++){
        printf("%d ",*(*(arr+i)+j));
    }
    printf("\n");
    }

}