#include<stdio.h>

void create(int **c_pointer){
    **(c_pointer) = 25;
}

void main(){

    int a=10,b;
    int *c = &a;

    create(&c);

    printf("%d\n",a);

}