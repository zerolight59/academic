#include<stdio.h>
#include<string.h>
char str[20];
int top = -1;

void push(char a){
    if(top+1==20){
        printf("Error : insufficent menory");
    }
    else{
        str[++top]=a;
    }
}
void pop(){
    if(top==-1){
        printf("Error : stack underflow");
    }
    else{
        printf("%c",str[top--]);
    }
}


int main(){
    char name[20];
    int i=0;
    printf("Enter the string : ");
    fgets(name,sizeof(name),stdin);
    while(i<strlen(name)){
        push(name[i]);
        i++;
    }
    printf("\n reverse string is :");
    while(top !=-1){
        pop();
    }
}