#include <stdio.h>
#include <stdlib.h>

void main(){
    int size;
    scanf("%d",&size);
    int *arr = (int *)malloc(size * sizeof(int));

    for(int i=0; i<size; i++){
        scanf("%d",(arr+i));
    }

//Bubble sort
    int swap = 1;
    while(swap != 0){
        swap =0;
        for(int i=0; i<size; i++){
            if(*(arr+i) > *(arr+i+1)){
                int temp = *(arr + i);
                *(arr + i) = *(arr + i +1);
                *(arr + i +1) = temp;
                swap++;
            }
        }
    }

//Print

printf("\nSorted:\n");

for(int i=0; i<size; i++){
    printf("%d ",*(arr+i));
}
printf("\n");

}