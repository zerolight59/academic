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
			printf("%d^%d",p[i].coeff,p[i].deg);
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
			printf("%d^%d",q[i].coeff,q[i].deg);
			if(i < n2-1){
				printf(" + ");
			}
		
	}
}
void sub(){
	int i,j,k;
 	i=j=k=0;
 	while(i<n1 && j<n2){
 		if(p[i].deg>q[j].deg)
		 {
 			addpoly[k].deg=p[i].deg;
			addpoly[k].coeff=p[i].coeff;		 
		 	i++;
		 }
		 else if(p[i].deg<q[j].deg)
		 {
		 	addpoly[k].deg=q[j].deg;
			addpoly[k].coeff=q[j].coeff;
		 	j++;
		 }
		 else{
		 	addpoly[k].deg=q[j].deg;
			addpoly[k].coeff=p[i].coeff-q[j].coeff;
		 	i++;
		 	j++;
		 }
		 k++;
	 }
	 
	 printf("\nsub polynomial is :");
	for(i=0;i<k;i++){
		if(addpoly[i].coeff == 0){
			continue;
		}
		printf("%d^%d",addpoly[i].coeff,addpoly[i].deg);
		if(i < k-1){
			printf(" + ");
		}
	}
	printf("\n");
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
	sub();
}
