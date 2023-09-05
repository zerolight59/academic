#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};



typedef struct node NODE;

NODE *head = NULL;




void insert_beg(int e) {
    NODE *t;
    t= (NODE *)malloc(sizeof(NODE));
    t->data = e;
    t->next = head;
    head = t;
}


void insert_end(int e){
    NODE *t;
     t = head;
        while (t->next != NULL) {
            
            t = t->next;
        }
    t->next=(NODE *)malloc(sizeof(NODE));
    t->next->data=e;
    t->next->next=NULL;
}


void insert_spec(int e, int n) {
    NODE *temp = (NODE *)malloc(sizeof(NODE));
    temp->data = e;
    temp->next = NULL;

    if (n == 1) {
        temp->next = head;
        head = temp;
        return;
    }

    NODE *t = head;
    int i = 1;

    while (i < n - 1 && t != NULL) {
        t = t->next;
        i++;
    }

    if (t == NULL) {
        printf("Invalid position for insertion\n");
        free(temp);
        return;
    }

    temp->next = t->next;
    t->next = temp;
}




void disp() {
    NODE *t;
    if (head == NULL) {
        printf("List is empty\n");
    } else {
        t = head;
        while (t != NULL) {
            
            if(t->next!=NULL){
                 printf("%d -> ", t->data); 
            }
            else{
                 printf("%d  ", t->data);
            }
           
            t = t->next;
        }
    }
}

int main() {
    insert_beg(10);
    insert_beg(20);
    insert_beg(30);
    insert_end(100);
    disp();
    insert_spec(999,2);
    printf("\n");
    disp();

    return 0;
}


