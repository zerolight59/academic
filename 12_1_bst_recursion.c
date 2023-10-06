#include<stdio.h>	
#include<malloc.h>

struct node{
	int data;
	struct node *left;
	struct node *right;
};

typedef struct node tree;

tree *root;

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
				printf("BST must note have same elements.");
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

void inorder(tree *r){
	if(r!=NULL){
		inorder(r->left);
		printf("%d ",r->data);
		inorder(r->right);
	}
}

void preorder(tree *r){
	if(r!=NULL){
		
		printf("%d ",r->data);
		preorder(r->left);
		preorder(r->right);
	}
}


void postorder(tree *r){
	if(r!=NULL){
		postorder(r->left);
		postorder(r->right);
		printf("%d ",r->data);
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
	inorder(root);
	printf("\npreorder :");
	preorder(root);
	printf("\npostorder :");
	postorder(root);
	return 0;
}















