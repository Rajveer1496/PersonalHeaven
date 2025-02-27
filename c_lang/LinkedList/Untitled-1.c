#include<stdio.h>
#include<stdlib.h>

struct box{
    int val;
    struct box *nxt;
    struct box *prev;
};

typedef struct box box;

//create

box *create(int no_of_elements,box **tail_pointer){

    box *current;
    // box *tail;

    box *head = malloc(sizeof(box));
    // printf("Enter Value of 1 element\n");
    scanf("%d",&head->val);
    current = head;

    for(int i=0; i<no_of_elements-1; i++){
        box *final = malloc(sizeof(box));

        current->nxt = final;
        final->prev = current;
        current = final;

        // printf("Enter value of %d element\n",i+2);
        scanf("%d",&current->val);
    }
    current->nxt=NULL;

    /*ERROR:
    
    *tail_pointer is of type box *, which matches the type of current. Assigning *tail_pointer = current; updates the tail pointer in main() to point to the correct last node in the list.

    Using **(tail_pointer) is invalid because it tries to dereference an extra level, which isn't needed in this context.

    
        **(tail_pointer) = current;

    */

    *tail_pointer = current; // *tail_pointer equals to tail in main()
    head->prev = NULL;
    return head;
}

//display

void display(box *head,box *tail){

 /*  ERROR: The issue in the display function lies in the way the choice is read. After calling scanf to read the integer for the menu selection, the newline character ('\n') remains in the input buffer. When scanf("%c", &choice); is called, it immediately reads the leftover newline, causing the program to skip taking the actual choice input for the display direction.
 
    // char choice;
    // printf("F for forward. B for backward\n");
    // scanf("%c",&choice);
*/ 
    char choice;
    // printf("F for forward. B for backward\n");
    getchar();
    scanf("%c",&choice);
    

    if(choice == 'F'){
        printf("Linked List (Forward): ");
        while(head != NULL){
        printf("%d <-> ",head->val);
        head = head->nxt;
        }
        printf("NULL");
        printf("\n"); 
    }

    if(choice == 'B'){
        printf("Linked List (Backward): ");
        while(tail != NULL){
        printf("%d <-> ",tail->val);
        tail = tail->prev;
        }
        printf("NULL");
        printf("\n");
    }

       
}

//Delete

box *delete(box *head,box **tail_pointer,int del_element,int no_of_elements){
    
    box *temp;
    box *new_head=head;;

    for(int i=1; head!=NULL ; i++){

        if(head->val == del_element){
            
            if(i ==1){
                new_head = head ->nxt;
                // head->nxt = NULL;
                free(head);
                return new_head;
            }
            else if(i == no_of_elements){
                temp->nxt = NULL;
                *tail_pointer = temp;
                free(head);
                return new_head;
            }         
            else{
                temp->nxt = head->nxt;
                temp = head->nxt;
                temp->prev = head->prev;
                // head->prev = NULL;
                // head->nxt = NULL;
                free(head);
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
            printf("Node with value %d found at position %d.\n",element_search,i);
            return 0;
        }

        head = head->nxt;
    }
    
    printf("Node with value %d not found.\n",element_search);
}

//insert


box *insert(box *head,box **tail_pointer,int insert_pos, int insert_value,int no_of_elements){

    box *temp;
    box *new_head = head;

    if(insert_pos == 1){
        box *new = malloc(sizeof(box));
        new->val = insert_value;
        new->nxt = head;
        head->prev = new;
        new->prev = NULL;
        new_head = new;
    }
    else if(insert_pos == no_of_elements+1){
        
        box *new = malloc(sizeof(box));
        new->val = insert_value;
        (*tail_pointer)->nxt = new;
        new->prev = *tail_pointer;
        new->nxt = NULL;
        *tail_pointer = new;
    }
    else if(insert_pos > no_of_elements){
        printf("Invalid position\n")
        return NULL;
    }
    else{
        for(int i=0; i<insert_pos-1;i++){
        temp =head;
        head = head->nxt;
        }

        box *new = malloc(sizeof(box));
        new->val = insert_value;

        temp->nxt = new;
        new->prev = temp;
        new->nxt = head;
        head->prev = new;
    }

    return new_head;
}

//traverse

int traverse(box *head,int trav_element,box *tail){

    char choice;
    
    // printf("F for forward, B for backward\n");
    getchar();
    scanf("%c",&choice);

    if(choice == 'F'){
        printf("Traversal from element %d in F direction: ",trav_element);
        box *temp = head;
        while(head != NULL){

            if(head->val == trav_element){
                    // printf("Traversing from node %d: ",trav_element);
                while(head != NULL){
                    printf("%d <-> ",head->val);
                    head = head->nxt;
                }
                printf("NULL \n");
                return 0;
            }

            head = head->nxt;
        }
    }

    if(choice == 'B'){
        printf("Traversal from element %d in B direction: ",trav_element);
        box *temp = tail;

        while(tail != NULL){
            if(tail->val == trav_element){
                    // printf("Traversing from node %d: ",trav_element);
                while(tail != NULL){
                    printf("%d <-> ",tail->val);
                    tail = tail->prev;
                }
                printf("NULL \n");
                return 0;
            }
            tail = tail->prev;
        }
    }
    printf("Node with value %d not found in the list.",trav_element);
    return 0;
}


int main(){

    box *head;
    box *tail;
    box *temp = NULL;
    int no_of_elements;
    int choice;

    // start:

    while(11){

    // printf("1.Create\n2.Delete\n3.Insert\n4.Display\n5.Search\n6.Traverse\n");

    scanf("%d",&choice);

    if(choice == 1){
        //create 
    // printf("No of elements\n");
    scanf("%d",&no_of_elements);
    head = create(no_of_elements,&tail);
    }

    if(choice == 2){
        //delete
        int del_element;
        // printf("Which element you want to delete");
        scanf("%d",&del_element);
        
        // printf("Before Delete Linked List: ");
        // display(head,tail);
        
        head = delete(head,&tail,del_element,no_of_elements);
        no_of_elements--;
        
        // printf("Node with value %d deleted.\nAfter Delete Linked List: ",del_element);
        // display(head,tail);
        
        return 0;
    }

    if(choice == 5){
        //search
        int element_search;
        // printf("Enter the element you want to search\n");
        scanf("%d",&element_search);
        // printf("Linked List: ");
        // display(head,tail);
        search(head,element_search);
        return 0;
    }

    if(choice == 3){
        //insert
        int insert_pos;
        int insert_value;
        // printf("Enter Value and Position you want to insert\n");
        scanf("%d",&insert_value);
        scanf("%d",&insert_pos);
        
        // printf("Before insertion Linked List: ");
        // display(head,tail);
        
        head = insert(head,&tail,insert_pos,insert_value,no_of_elements);
        no_of_elements++;

        if(head == NULL){
            return 0;
        }
        
        // printf("After insertion Linked List: ");
        // display(head,tail);
        // return 0;
    }

    if(choice == 4){
        //display
        // printf("Linked List: ");
        display(head,tail);
        return 0;
    }

    if(choice == 6){
        //Traverse
        int trav_element;
        // printf("Enter the element you want to traverse from\n");
        scanf("%d",&trav_element);
        
        // printf("Linked List: ");
        // display(head,tail);
        
        traverse(head,trav_element,tail);
        
        return 0;
    }

    // printf("\n");
    // goto start;
    }
}