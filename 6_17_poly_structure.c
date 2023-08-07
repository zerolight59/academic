#include<stdio.h>
struct poly{
	int coeff;
	int deg;
}p[10];
int i;

void read(int n){
		for( i=0;i<n;i++){
		printf("enter the coefficent %d:",i+1);
		scanf("%d",&p[i].coeff);
		printf("enter the degree of %d :",i+1);
		scanf("%d",&p[i].deg);
	}
}
void disp(int n){
	printf(" polynomial is :");
	for(i=0;i<n;i++){
			printf("%d^%d",p[i].coeff,p[i].deg);
			if(i < n-1){
				printf(" + ");
			}
		
	}
}
int main(){
	int n;
	printf("enter the no of elements in poly");
	scanf("%d",&n);
	read(n);
	disp(n);
}
