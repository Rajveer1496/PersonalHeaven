#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int id;
    char name[10];
} student;

void main(){

    int size;
    scanf("%d",&size);
     student *s = ( student *)malloc(size * sizeof(student));

    for(int i=0; i<size;i++){
        scanf("%d",&(s[i].id));
        // fgets(s[i].name,10,stdin);
        scanf("%s",&(s[i].name));
    }

    for(int i=0; i<size; i++){
        printf("ID: %d\nName: %s\n",s[i].id,s[i].name);
    }

    free(s);
}
