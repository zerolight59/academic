#include<stdio.h>
struct poly{
	int coeff;
	int deg;
}p[10],q[10],addpoly[10];
int i;
int n1,n2;

void read1(){
		for( i=0;i<n1;i++){
		printf("enter the coefficent %d:",i+1);
		scanf("%d",&p[i].coeff);
		printf("enter the degree of %d :",i+1);
		scanf("%d",&p[i].deg);
	}
}
void disp1(){
	printf(" polynomial is :");
	for(i=0;i<n1;i++){
			printf("%dx^%d",p[i].coeff,p[i].deg);
			if(i < n1-1){
				printf(" + ");
			}
		
	}
}
void read2(){
		for( i=0;i<n2;i++){
		printf("enter the coefficent %d:",i+1);
		scanf("%d",&q[i].coeff);
		printf("enter the degree of %d :",i+1);
		scanf("%d",&q[i].deg);
	}
}
void disp2(){
	printf(" polynomial is :");
	for(i=0;i<n2;i++){
			printf("%dx^%d",q[i].coeff,q[i].deg);
			if(i < n2-1){
				printf(" + ");
			}
		
	}
}
void mul(){
	int i,j,k;
 	i=j=k=0;
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++){
		    
		    addpoly[k].coeff	 =   p[i].coeff*q[j].coeff;
			addpoly[k].deg       =   p[i].deg+q[j].deg;
			k++;
		}
	} 	
	 
	 printf("\nadd polynomial is :");
	for(i=0;i<k;i++){
		printf("%dx^%d",addpoly[i].coeff,addpoly[i].deg);
		if(i < k-1){
			printf(" + ");
		}
	}
}
int main(){

	printf("\nenter the no of elements in poly 1");
	scanf("%d",&n1);
	read1();
	disp1();
	printf("\nenter the no of elements in poly 2");
	scanf("%d",&n2);
	read2();
	disp2();
	mul();
}