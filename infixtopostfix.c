#include<stdio.h>
#include<malloc.h>
#include<string.h>

#define size 50

char ar[size];
int top=-1;
char * infix;
char *postfix;

void push(char e){
    if(top+1!=size){
        ar[++top]=e;
    }
}
char pop(){
    return ar[top--];
}

int pre(char ch){
    if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2; 
    else
        return 0;
}
int isop(char ch){
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/') 
        return 1;
    else
        return 0;
}

char *intopost(){
    postfix =  (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i=0,j=0;
    while (infix[i]!='\0')
    {
        if(!isop(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else{
            if (pre(infix[i])>pre(ar[top]))
            {
                push(infix[i]);
                i++;
            }
            else{
                postfix[j]=pop();
                j++;
            }
        }

    }
        while (top!=-1)
        {
            postfix[j]=pop();
            j++;
        }
    postfix[j]='\0';
    return postfix;
 }
    

int main(){
    infix = "a-b";
    printf("postfix is %s", intopost(infix));
    return 0;
}