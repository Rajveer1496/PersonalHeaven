#include<stdio.h>
#include<stdlib.h>

struct box{
    int val;
    struct box *nxt;
};

typedef struct box box;

//create

box *create(int no_of_elements){

    box *current;

    box *head = malloc(sizeof(box));
    scanf("%d",&h ead->val);
    current = head;

    for(int i=0; i<no_of_elements-1; i++){
        box *final = malloc(sizeof(box));

        current->nxt = final;
        current = final;

        // head =final;
        // head->nxt = temp;
        // temp = head;
        printf("Enter value of %d element\n",i+1);
        scanf("%d",&current->val);
    }
    current->nxt=NULL;
    return head;
}

//display

void display(box *head){

    while(head != NULL){
        printf("%d ",head->val);
        head = head->nxt;
    }
    printf("\n");    
}





void main(){

    box *head;
    box *temp = NULL;

//create 
    int no_of_elements;
    scanf("%d",&no_of_elements);
    head = create(no_of_elements);

//display
    display(head);
    

}