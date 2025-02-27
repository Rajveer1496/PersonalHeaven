#include <stdio.h>

int main(){

    int stack[1000];
    int TOP=-1,SIZE;
    int choice;

while(11){
    printf("1. Create Stack (Reinitialize)\n2. Push an element\n3. Pop an element\n4. Peek/Top of the stack\n5. Get size of the stack\n6. Check if stack is empty\n7. Check if stack is full\n8. Display stack\n9. Exit");

    scanf("%d",&choice);

    if(choice ==1){
        //Reinitialize
        TOP = -1;

    }

    if(choice ==2){
        // Push element
        int ele_push;
        scanf("%d",&ele_push);
        TOP++;
        stack[TOP] = ele_push;
    }

    if(choice ==3){
        //POP element
        TOP--;
    }

    if(choice ==4){
        //Peek/Top of the stack
        printf("%d\n",stack[TOP]);
    }

    if(choice ==5){
        // Get size of stack
        printf("%d\n",TOP);
    }

    if(choice ==6){
        //Check if stack is empty
        if(TOP == -1){
            printf("Stack is empty\n");
        }
    }

    if(choice ==7){
        //Check if stack is full
    }

    if(choice ==8){
        //Display stack
        for(int i=0;i<TOP;i++){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }

    if(choice ==9){
        //Exit
        return 0;
    }

}
return 0;

}