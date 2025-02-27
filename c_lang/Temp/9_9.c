#include<stdio.h>

 struct data{
        int id;
        int salary;
        char name[10];

        struct book{
            int title;            
        };
 };

void main(){

    struct data d1;
    struct book b1;
 
    scanf("%d",&d1.id);
    scanf("%d",&b1.title);

    printf("%d\n",d1.id);
    printf("%d\n",b1.title);

}