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
    current->nxt=head;



    *tail_pointer = current; // *tail_pointer equals to tail in main()
    head->prev = current;
    return head;
}

//display

void display(box *head,box *tail){

 
    char choice;
    // printf("F for forward. B for backward\n");
    getchar();
    scanf("%c",&choice);
    

    if(choice == 'F'){
        printf("List (Forward): ");
        do{
        printf("%d <-> ",head->val);
        head = head->nxt;
        }while(head != tail->nxt);
        printf("(back to head)");
        printf("\n"); 
    }

    if(choice == 'B'){
        printf("List (Backward): ");
        do{
        printf("%d <-> ",tail->val);
        tail = tail->prev;
        }while(tail != head->prev);
        printf("(back to head)");
        printf("\n");
    }

       
}

//display 222

void disp2(box *head,box *tail){

 
    char choice='F';
    // printf("F for forward. B for backward\n");
    getchar();
    // scanf("%c",&choice);
    

    if(choice == 'F'){
        printf("List (Forward): ");
        do{
        printf("%d <-> ",head->val);
        head = head->nxt;
        }while(head != tail->nxt);
        printf("(back to head)");
        printf("\n"); 
    }

    if(choice == 'B'){
        printf("List (Backward): ");
        do{
        printf("%d <-> ",tail->val);
        tail = tail->prev;
        }while(tail != head->prev);
        printf("(back to head)");
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

//search 22

int search22(box *head, int element_search){
    
    for(int i=1; head!=NULL ; i++){

        if(head->val == element_search){
            printf("Node with value %d found at position %d\n",element_search,i);
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
        new->nxt = head;
        head->prev = new;
        *tail_pointer = new;
    }
    else if(insert_pos > no_of_elements){
        printf("Invalid position\n");
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

int traverse(box *head, int trav_element, box *tail) {
    char choice;
    getchar(); // Consume newline
    scanf("%c", &choice);

    box *temp = head;
    int found = 0;

    // First, find the first occurrence of trav_element
    do {
        if (temp->val == trav_element) {
            found = 1;
            break;
        }
        temp = temp->nxt;
    } while (temp != head);

    if (!found) {
        printf("Node with value %d not found.\n", trav_element);
        return 0;
    }

    if (choice == 'F') {
        printf("Traversing forward from value %d: ", trav_element);
        box *start = temp;
        do {
            printf("%d<->", temp->val);
            temp = temp->nxt;
        } while (temp != start);
        printf("(back to head)\n");
    }

    if (choice == 'B') {
        printf("Traversing backward from value %d: ", trav_element);
        box *start = temp;
        do {
            printf("%d<->", temp->val);
            temp = temp->prev;
        } while (temp != start);
        printf("(back to head)\n");
    }

    return 0;
}


//

/*int traverse(box *head,int trav_element,box *tail){

    char choice;
    box *temp;
    
    // printf("F for forward, B for backward\n");
    getchar();
    scanf("%c",&choice);

    if(choice == 'F'){
        box *temp = head;
        while(head != NULL){

            if(head->val == trav_element){
                    printf("Traversing forward from value %d: ",trav_element);
                    // printf("Traversing from node %d: ",trav_element);
                do{
                    printf("%d<->",head->val);
                    head = head->nxt;
                }while(head != temp->nxt);
                printf("(back to head)\n");
                return 0;
            }
            temp =head;
            head = head->nxt;
        }
    }

    if(choice == 'B'){
        box *temp = tail;

        while(tail != NULL){
            if(tail->val == trav_element){
                    printf("Traversing backward from value %d: ",trav_element);
                    // printf("Traversing from node %d: ",trav_element);
                do{
                    printf("%d<->",tail->val);
                    tail = tail->prev;
                }while(tail != temp->prev);
                printf("(back to head)\n");
                return 0;
            }
            temp = tail;
            tail = tail->prev;
        }
    }
    
    printf("Node with value %d not found.",trav_element);
    return 0;
}*/


int main(){

    box *head=NULL;
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
        search22(head,del_element);

        
        printf("Before deletion: ");
        disp2(head,tail);
        
        head = delete(head,&tail,del_element,no_of_elements);
        no_of_elements--;
        
        printf("Node with value %d deleted.\nAfter deletion: ",del_element);
        disp2(head,tail);
        
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
        if(head == NULL){
            char chur;
            scanf("%c",&chur);
            scanf("%c",&chur);


            printf("The list is empty.");
            return 0;
        }

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