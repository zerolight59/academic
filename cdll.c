#include <stdio.h>
#include <malloc.h>

struct NODE{
    int data;
    struct NODE *next;
    struct NODE *prev;
};
typedef struct NODE node;
node * head = NULL;

void insert(int e){
    node *t=NULL;
    if(head == NULL){
        head = (node *)malloc(sizeof(node));
        head->data=e;
        head->next=head;
        head->prev=head;
    }
    else{
        t=head;
        while(t->next!=head){
            t=t->next;
        }
        t->next=(node *)malloc(sizeof(node));
        t->next->data=e;
        t->next->next=head;
        t->next->prev=t;
        head->prev=t->next;
    }
}

void disp(){
    node *t = NULL;
    if(head == NULL){
        printf("CDLL empty");
    }
    else{
        t=head;
        printf("\n");
        do{
            printf("%d\t",t->data);
            t=t->next;
        }while(t!=head);
    }
}


void delete(int e){
    node *t=head;
    if(head == NULL){
        printf("CDLL empty");
    }
    else if(head->data==e && head->next==head){
        head=NULL;
    }
    else if(head->data==e){
        head->prev->next=head->next;
        head->next->prev=head->prev;
        head=head->next;
    }
    else{
        t=head->next;
        while(t->data!=e && t!=head){
            t=t->next;
        }
        t->next->prev = t->prev;
        t->prev->next = t->next;
    }
}

int main()
{
    insert(10);
    disp();
    insert(20);
    disp();
    insert(30);
    disp();
    delete(20);
    disp();
    delete(10);
    disp();
    delete(30);
    disp();
    return 0;
}
