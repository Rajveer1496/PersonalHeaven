#include<stdio.h>
#include<stdlib.h>


int main(){
    
    int choice;
    int size;
    int arr[100];
    
    begin:
    
    // printf("\n\nMain Menu\n1. Create\n2. Delete\n3. Search\n4. Insert\n5. Display\n6. Exit\n");
    scanf("%d",&choice);
    
//Create
    
    if(choice == 1){
        // printf("Enter the number of elements (No limits)\n");
        scanf("%d",&size);
        
        //  int* arr = (int *)malloc(size * sizeof(int));
    
        for(int i=0; i<size; i++){
            // printf("Enter element %d:\n",i+1);
            scanf("%d",&arr[i]);
        }
        
        // for(int i=0; i<size; i++){
        //     printf("%d ",arr[i]);
        // }
    }

//Delete

    if(choice ==2){
        int del;
        // printf("Kaunsa Delete karna hai? pos do\n");
        scanf("%d",&del);
        arr[del-1] = -911;

    }

//Search

    if(choice == 3){

        int search_element;
        // printf("Enter Element to search\n");
        scanf("%d",&search_element);
        
        int del=0;

        for(int i=0; i<size; i++){

            if(arr[i] == -911){
                del++;
            }

            if(arr[i] == search_element){
                printf("%d found at position %d\n",search_element,i+1-del);
            }
        }
        return 0;
    }

//Insert

    // if(choice == 4){
    //     printf("Enter Position to insert(1 to %d)\n",size);
    //     int pos,ele;
    //     scanf("%d",&pos);
    //     printf("Element to insert\n");
    //     scanf("%d",&ele);
        
    //     //shift
        
    //     for(int i=size+1; i > pos ; i-- ){
    //         arr[i+1] = arr[i];
    //     }
        
    //    arr[pos-1] = ele;

    //    size++;
        
    //     printf("Updated List\n");

        
    //     for(int i=0; i<size; i++){
    //         if(arr[i] != -911){
    //         printf("%d ",arr[i]);
    //         }
    //     }
    // }

     if(choice == 4){
        // printf("Enter Position to insert(1 to %d)\n",size);
        int pos,ele;
        scanf("%d",&pos);
        // printf("Element to insert\n");
        scanf("%d",&ele);
        
        //shift
        
        for(int i=size; i>=pos  ; i--){
            arr[i] = arr[i-1];
        }
        
        arr[pos-1] = ele;
        size++;
        
        // printf("Updated List\n");
        
        // for(int i=0; i<size; i++){
        //     if(arr[i] != -911){
        //     printf("%d ",arr[i]);
        //     }
        // }
    }
    
//Display

    if(choice == 5){
        for(int i=0; i<size; i++){
            if(arr[i] != -911){
            printf("%d ",arr[i]);
            }
        }
        return 0;
    }

    if(choice == 6){
        return 0;
    }

    
    goto begin;

}
