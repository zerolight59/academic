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

void sort_by_values() {
    
    NODE *current, *index;
    int temp;

    if (head == NULL) {
        return; // Nothing to sort
    }

    current = head;

    while (current != NULL) {
        index = current->next;

        while (index != NULL) {
            if (current->data > index->data) {
                // Swap the data values
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
            index = index->next;
        }
        current = current->next;
    }
}

void sort_by_addresses() {
    NODE *current, *index;
    NODE *tempNode;
    
    if (head == NULL) {
        return; // Nothing to sort
    }

    current = head;

    while (current != NULL) {
        index = current->next;

        while (index != NULL) {
            if (current->data > index->data) {
                // Swap the node addresses (pointers)
                tempNode = current;
                current = index;
                index = tempNode;
            }
            index = index->next;
        }
        current = current->next;
    }
}

int main()
{
   insert(40);
   insert(20);
   insert(50);
   disp();
    
    printf("\n\n sort of linklist (swapping value) = ");
    sort_by_values();
   disp();
   
   printf("\n\n sort of linklist (swapping addresses) = ");
    sort_by_addresses();
   disp();
}
