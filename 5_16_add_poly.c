#include<stdio.h>
#define max 10
int poly1[max][2];
int poly2[max][2];
int addpoly[max][2];
int n1,n2,i;
void read1(){
	for(i=0;i<n1;i++){
		printf("enter the coefficent of %d :",i+1);
		scanf("%d",&poly1[i][0]);
		printf("enter the degree of %d :",i+1);
		scanf("%d",&poly1[i][1]);
	}
}
void disp1(){
	printf(" polynomial is :");
	for(i=0;i<n1;i++){
			printf("%d^%d",poly1[i][0],poly1[i][1]);
			if(i < n1-1){
				printf(" + ");
			}
		
	}
	printf("\n");
}
void read2(){
	for(i=0;i<n2;i++){
		printf("enter the coefficent of %d :",i+1);
		scanf("%d",&poly2[i][0]);
		printf("enter the degree of %d :",i+1);
		scanf("%d",&poly2[i][1]);
	}
}
void disp2(){
	printf(" polynomial is :");
	for(i=0;i<n2;i++){
			printf("%d^%d",poly2[i][0],poly2[i][1]);
			if(i < n2-1){
				printf(" + ");
			}
		
	}
	printf("\n");
}
void add(){
	int i,j,k;
 	i=j=k=0;
 	while(i<n1 && j<n2){
 		if(poly1[i][1]>poly2[j][1]){
 			addpoly[k][1]=poly1[i][1];
			addpoly[k][0]=poly1[i][0];		 
		 	i++;
		 }
		 else if(poly1[i][1]<poly2[j][1]){
		 	addpoly[k][1]=poly2[j][1];
			addpoly[k][0]=poly2[j][0];
		 	j++;
		 }
		 else{
		 	addpoly[k][1]=poly2[j][1];
		 	addpoly[k][0]=poly2[j][0]+poly1[i][0];
		 	i++;
		 	j++;
		 }
		 k++;
	 }
	 printf("\nadd polynomial is :");
	for(i=0;i<=k;i++){
		printf("%d^%d",addpoly[i][0],addpoly[i][1]);
		if(i < k){
			printf(" + ");
		}
	}
	printf("\n");
}
int main(){
	printf("enter the no of elements in fisrt polynomial :");
	scanf("%d",&n1);
	read1();
	disp1();
	printf("enter the no of elements in secound polynomial :");
	scanf("%d",&n2);
	read2();
	disp2();
	add();
}
