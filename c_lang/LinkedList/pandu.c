#include<stdio.h>
#include<stdlib.h>

struct dol{
int val;
struct dol* next;
};
 typedef struct dol dol;

int main(){

    dol *new = malloc(sizeof(dol));

    dol* head=new;
    head->val=25;

    new = malloc(sizeof(dol));
    head->next=new;
    dol* temp =new;
    temp->val=39;

    new = malloc(sizeof(dol));
    temp->next=new;
    temp=new;
    temp->val=41;

    new = malloc(sizeof(dol));

    temp=new;
    temp->next=NULL;
    temp->val=66;
    return 0;

}