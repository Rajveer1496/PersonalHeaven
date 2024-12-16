#include<stdio.h>

void main(){

    int arr[3];
    int *ptr = arr;

    for(int i=0; i<3;i++){

        scanf("%d",(ptr+i));
    }

       for(int i=0; i<3;i++){

        printf("%d",*(ptr+i));
    }
}
