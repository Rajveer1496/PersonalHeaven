#include <stdio.h>

void swap(int *a,int *b){
    int c = *b;
    *b = *a;
    *a = c;
}

void main(){
int a,b;

scanf("%d %d",&a,&b);

swap(&a,&b);

printf("a=%d b=%d\n",a,b);

}