#include <stdio.h>
#include <stdlib.h>

void main(){
    int size;
    scanf("%d",&size);

    int *arr = (int *)malloc(size * sizeof(int));

    for(int i=0;i<size;i++){
        scanf("%d",(arr+i));
    }

int *lowest = NULL;
int initial;

    for(int i=0;i<size;i++){
        initial = *(arr+i);

        for(int j=i;j<size;j++){

            if(*(arr+j)<initial){
                initial = *(arr+j);
            }
        }
        *(arr+i) = initial;
    }

printf("sorted:\n");

for(int i=0; i<size;i++){
    printf("%d ",*(arr+i));
}
printf("\n");

}