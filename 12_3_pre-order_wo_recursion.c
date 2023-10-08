#include<stdio.h>	
#include<malloc.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node tree;
tree *root;

struct stack{
	tree *r;
	struct stack *next;
};
typedef struct stack stack;
stack *top=NULL;

void insert(int e){
	tree *p,*x;
	if(root == NULL){
		root=(tree *)malloc(sizeof(tree));
		root->data=e;
		root->left=NULL;
		root->right=NULL;
	}
	else{
		p=root;
		while(p!=NULL){
			x=p;
			if(p->data > e)
				p=p->left;
			else if(p->data < e)
				p=p->right;
			else
				printf("BST must not have same elements.");
		}
		if(x->data < e){
			x->right=(tree *)malloc(sizeof(tree));
			x->right->data=e;
			x->right->left=NULL;
			x->right->right=NULL;
		}
		else{
			x->left=(tree *)malloc(sizeof(tree));
			x->left->data=e;
			x->left->left=NULL;
			x->left->right=NULL;
		}
	}
}


void push(tree *t){
	stack *temp=(stack *)malloc(sizeof(stack));
	temp->r=t;
	temp->next=top;
	top=temp;
}

tree* pop(){
	tree *t=NULL;
	if(top!=NULL){
		t=top->r;
		top = top->next;
	}
	return t;
}

void preorder_wo(tree *root){
	
	tree *t;
	t=root;
	while(t!=NULL){
		printf("%d \t",t->data);
		push(t);
		t=t->left;	
	}
	t = pop();
	while(t!=NULL){
		t=t->right;	
		while(t!=NULL){
		printf("%d \t",t->data);
		push(t);
		t=t->left;	
		}
		t = pop();
	}
}

int main(){
	insert(100);
	insert(200);
	insert(50);
	insert(10);
	insert(75);
	insert(110);
	insert(150);
	printf("inorder :");
	preorder_wo(root);
	return 0;
}
