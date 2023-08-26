#include<stdio.h>
#include<malloc.h>
int *p;
int n;
int *m;
void read(){
	int i;
	printf("enter the size of array :");
	scanf("%d",&n);
	p=(int *)calloc(n,sizeof(int));
	if(p != NULL){
		printf("enter the elements of array :");
		for(i=0;i<n;i++){
			scanf("%d",&p[i]);
		}
	}
}
void process(){
	int i,j,count;
	m =(int *)calloc(n,sizeof(int));
	
	
	for(i=0;i<n;i++){
		count=0;
		for(j=i;j<n;j++){
			if(p[i]==p[j]){
				count++;
			}
		}
		m[i]=count;//stores frequency
	}
	
	
//	printf("m =");
//	for(i=0;i<n;i++){
//			printf("%d",m[i]);
//		}
}

void mode(){
	int i,max=0,mode;
		for(i=0;i<n;i++){
			if(m[i]>max){
				max=m[i];
			}
		}
		printf("mode = ");
		for(i=0;i<n;i++){
			if(m[i]==max){
				printf("%d,",p[i]);
			}
		}
		
}

int main(){
	read();
	process();
	mode();
	return 0;
}
