#include<stdio.h>
#include<malloc.h>
struct book{
	char author_name[20];
	char book_name[30];
};
struct book *b;
int n;

void read(){
	int i;
	printf("enter the no of books :");
	scanf("%d",&n);
	b=(struct book *)calloc(n,sizeof(struct book));
	for(i=0;i<n;i++){
		printf("enter the book name :");
		scanf("%s",&b[i].book_name);
		printf("enter the aurhor name :");
		scanf("%s",&b[i].author_name);
	}
}
void display(){
	int i;
	printf("books detiles ");
	for(i=0;i<n;i++){
		printf("\nbook name :%s",b[i].book_name);
		printf("\nauthor :%s",b[i].author_name);
	}
}
int main(){
	read();
	display();
}
