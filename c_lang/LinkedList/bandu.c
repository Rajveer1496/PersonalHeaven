#include<stdio.h>
#include<stdlib.h>

struct home{
    int val;
    struct home* next;
};

typedef struct home ghar;

int main(){

    ghar *new = malloc(sizeof(ghar));

    ghar* head;
    ghar* temp;

    head = new;
    temp = new;

    head->val =5;

    for(int i=0; i<5; i++){
        new = malloc(sizeof(ghar));
        temp->next = new;
        temp = new;

        scanf("%d",&(temp->val));
    }

    new->next = NULL;

    

    temp = head;

    printf("Printing:\n");


    while(temp->next != NULL){
        printf("%d ",temp->val);
        temp = temp->next;
    }

    printf("\n");


    return 0;
}