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
    head = new;

    head->val =5;

    new = malloc(sizeof(ghar));

    head->next = new;
    ghar* temp=new;
    temp->val=10;

    new = malloc(sizeof(ghar));
    temp->next=new;
    temp=new;

    temp->val=69;
    temp->next=NULL;





    
    ghar *gadi;
    
    gadi = head;
    
    for(int i=0;i<3;i++){
        printf("%d\n",gadi->val);
        gadi = gadi->next;
    }







    // for(int i=0;i<3;i++){
    //     printf("Hello\n");
    // }

    return 0;



}