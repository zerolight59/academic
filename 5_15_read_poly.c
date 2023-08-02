#include<stdio.h>
#define max 10
int poly[max][2];
int n,i;
void read(){
	for(i=0;i<n;i++){
		printf("enter the coefficent of %d :",i+1);
		scanf("%d",&poly[i][0]);
		printf("enter the degree of %d :",i+1);
		scanf("%d",&poly[i][1]);
	}
}
void disp(){
	printf(" polynomial is :");
	for(i=0;i<n;i++){
			printf("%d^%d",poly[i][0],poly[i][1]);
			if(i < n-1){
				printf(" + ");
			}
		
	}
}
int main(){
	printf("enter the no of elements in polynomial :");
	scanf("%d",&n);
	read();
	disp();
}
