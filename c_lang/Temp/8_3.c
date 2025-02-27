#include<stdio.h>

void main(){

    int a=5;
    int c='a';
    int d;
    int arr[5];
    char crr[3] = {"hi"};
    void *arptr[5];

    arptr[0] = &a;
    arptr[1] = &c; 
    arptr[2] = &d; 
    arptr[3] = arr; 
    arptr[4] = crr; 

   // printf("%d\n%c\n",*arptr[0],*(arptr[4]+1));

   printf("%c\n",(*(char *)(arptr[4]+1)));

   (*(char *)(arptr[4]+1)) = 'p';

   printf("%c\n",(*(char *)(arptr[4]+1)));

    // for(int i=0; i<5; i++){

    //     printf("%d \n",(arptr + i));
    // }

}