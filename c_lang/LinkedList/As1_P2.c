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
    // printf("Enter Value of 1 element\n");
    scanf("%d",&head->val);
    current = head;

    for(int i=0; i<no_of_elements-1; i++){
        box *final = malloc(sizeof(box));

        current->nxt = final;
        current = final;

        // printf("Enter value of %d element\n",i+2);
        scanf("%d",&current->val);
    }
    current->nxt=NULL;
    return head;
}

//display

void display(box *head){

    while(head != NULL){
        printf("%d -> ",head->val);
        head = head->nxt;
    }
    printf("NULL");
    printf("\n");    
}

//Delete

box *delete(box *head,int del_element){
    
    box *temp;
    box *new_head=head;;

    for(int i=1; head!=NULL ; i++){

        if(head->val == del_element){
            
            if(i ==1){
                new_head = head ->nxt;
                head->nxt = NULL;
                return new_head;
            }
            else{
                temp->nxt = head->nxt;
                head->nxt = NULL;
                return new_head;
            }
        }

        temp = head;
        head = head->nxt;
    }
}

//search

int search(box *head, int element_search){
    
    for(int i=1; head!=NULL ; i++){

        if(head->val == element_search){
            printf("Element %d found at position %d.\n",element_search,i);
            return 0;
        }

        head = head->nxt;
    }
    
    printf("ELement %d not found in the list.\n",element_search);
}

//insert

box *insert(box *head, int insert_pos, int insert_value){

    box *temp;
    box *new_head = head;

    if(insert_pos == 1){
        box *new = malloc(sizeof(box));
        new->val = insert_value;
        new->nxt = head;
        new_head = new;
    }
    else{
        for(int i=0; i<insert_pos-1;i++){
        temp =head;
        head = head->nxt;
    }

    box *new = malloc(sizeof(box));
    new->val = insert_value;

    temp->nxt = new;
    new->nxt = head;
    }

    return new_head;
}

//traverse

int traverse(box *head,int trav_element){

    box *temp = head;

    // printf("Linked List: ");
    //  while(temp != NULL){
    //             printf("%d -> ",temp->val);
    //             temp = temp->nxt;
    //         }
    //         printf("NULL \n");

    while(head != NULL){
        if(head->val == trav_element){
                printf("Traversing from node %d: ",trav_element);
            while(head != NULL){
                printf("%d -> ",head->val);
                head = head->nxt;
            }
            printf("NULL \n");
            return 0;
        }
        head = head->nxt;
    }

    printf("Node with value %d not found in the list.",trav_element);
    return 0;
}


int main(){

    box *head;
    box *temp = NULL;
    int no_of_elements;
    int choice;
    
    start:

    // printf("1.Create\n2.Delete\n3.Search\n4.Insert\n5.Display\n6.Traverse\n");

    
    scanf("%d",&choice);

    if(choice == 1){
        //create 
    // printf("No of elements\n");
    scanf("%d",&no_of_elements);
    head = create(no_of_elements);
    }

    if(choice == 2){
        //delete
        int del_element;
        // printf("Which element you want to delete");
        scanf("%d",&del_element);
        
        printf("Before Delete Linked List: ");
        display(head);
        
        head = delete(head,del_element);
        no_of_elements--;
        
        printf("Node with value %d deleted.\nAfter Delete Linked List: ",del_element);
        display(head);
        
        return 0;
    }

    if(choice == 3){
        //search
        int element_search;
        // printf("Enter the element you want to search\n");
        scanf("%d",&element_search);
        printf("Linked List: ");
        display(head);
        search(head,element_search);
        return 0;
    }

    if(choice == 4){
        //insert
        int insert_pos;
        int insert_value;
        // printf("Enter position and value you want to insert\n");
        scanf("%d",&insert_value);
        scanf("%d",&insert_pos);
        
        printf("Before insertion Linked List: ");
        display(head);
        
        head =insert(head,insert_pos,insert_value);
        
        printf("After insertion Linked List: ");
        display(head);
        return 0;
    }

    if(choice == 5){
        //display
        printf("Linked List: ");
        display(head);
        return 0;
    }

    if(choice == 6){
        //Traverse
        int trav_element;
        // printf("Enter the element you want to traverse from\n");
        scanf("%d",&trav_element);
        
        printf("Linked List: ");
        display(head);
        
        traverse(head,trav_element);
        
        return 0;
    }

    // printf("\n");
    goto start;
}