#include <stdio.h>
#include<malloc.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE *head = NULL;

void insert(int e){
    NODE *t;
    if(head==NULL){
        head=(NODE *)malloc(sizeof(NODE));
        head->data=e;
        head->next=NULL;
    }
    else{
        t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=(NODE *)malloc(sizeof(NODE));
        t->next->data=e;
        t->next->next=NULL;
    }
}

void disp(){
    NODE * t;
    if(head==NULL){
        printf("list is empty");
    }
    else{
        t=head;
        while(t!=NULL){
            if(t->next == NULL){
                printf("%d ",t->data);
            }
            else{
                printf("%d -> ",t->data);
            }
            t=t->next;
        }
    }
}

void reverse() {
    NODE *prev = NULL;
    NODE *current = head;
    NODE *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev; // Update the new head
}



int main()
{
   insert(10);
   insert(20);
   insert(30);
   disp();
    
    printf("\n reverse of linklist = ");
   reverse();
   disp();
}
