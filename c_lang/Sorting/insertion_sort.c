#include <stdio.h>
#include <stdlib.h>

void main(){
    int size;
    scanf("%d",&size);

    int *arr = (int *)malloc(size * sizeof(int));

    for(int i=0; i<size; i++){
        scanf("%d",(arr+i));
    }

    // printf("Debug\n");

//Insertion sort

    for(int i=0;i<size;i++){
        for(int j=i;j!=0;j--){
            if(*(arr+j)<*(arr+j-1)){
                int temp = *(arr+j);
                *(arr+j)=*(arr+j-1);
                *(arr+j-1)=temp;
            }
        }
    }

printf("\nSorted:\n");

for(int i=0; i<size; i++){
    printf("%d ",*(arr+i));
}

// if(size<5) printf("OK\n");

printf("\n");

}