#include<stdio.h>
#include<stdlib.h>

merge(int *left,int *right){
    
}

void mergeSort(int *arr,int len){
    int left[len/2];
    int right[len/2];

    if(len = 1){
        return;
    }

    for(int i=0; i<len; i++){
        if(i<len/2){
            left[i] = *(arr+i);
        }
        else{
            right[i-len/2] = *(arr+i);
        }
    }

    int newlen = len/2;

    mergeSort(left,newlen);
    mergeSort(right,newlen);
    merge(left,right);
}



void main(){

    int arr[] = {23,75,12,98,45,234,99,1};
    int len = 8;

    mergeSort(arr,len);

    printf("%d",*(arr+1));


    // for(int i=0;i<size;i++){
    //     scanf("%d",arr+i);
    // }

//Dividing into other arrays



}