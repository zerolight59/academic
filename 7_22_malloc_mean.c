#include<stdio.h>
#include<malloc.h>
int *p;
int i,n,e; 
void readUsingMalloc(){
	
	printf("enter the size of array :");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int));
	printf("enter the elements of array :");
	for(i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
}
void mean(){
	int sum=0;mean;
	
	for(i=0;i<n;i++){
		sum=sum+p[i];
	}	
	printf("\nmean =%d",sum/n);
}
int main(){
	readUsingMalloc();
	mean();
}
