#include<stdio.h>
#include<malloc.h>
#include<string.h>

char *varchar;

void read(){
    int n;
    printf("enter the capasity of string :");
	scanf("%d",&n);
	varchar=(char *)malloc(n*sizeof(char));
	
	if(varchar != NULL){
	    printf("enter the string (%dlimit) :",n);
	    scanf("%s",varchar);
	    printf("entread string is %s",varchar);
	}
	else{
	    printf("menory not allocated");
	    
	}
}
void process(){
    int size = strlen(varchar)+1;
    
    
    varchar =(char *)realloc(varchar,size*sizeof(char));
    
    if(varchar != NULL){
        printf("\nstring is %s",varchar);
    }
    else{
        printf("menory  reallocation failed");
    }
}
int main(){
	read();
	process();
	free(varchar);
}