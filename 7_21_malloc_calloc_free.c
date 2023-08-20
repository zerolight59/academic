#include<stdio.h>
#include<malloc.h>
int *p;
int i,n,e; 
void usingMalloc(){
	p=(int *)malloc(sizeof(int));
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the elements of array :");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	printf("elements of array are :");
	for(i=0;i<n;i++){
		printf("\t%d",p[i]);
	}
	free(p);
}
void usingCalloc(){
	p=(int *)calloc(n,sizeof(int));
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the elements of array :");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	printf("elements of array are :");
	for(i=0;i<n;i++){
		printf("\t%d",p[i]);
	}
	free(p);
}
int main(){
	usingMalloc();
	usingCalloc();
}
