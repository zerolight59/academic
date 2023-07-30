#include <stdio.h>
int ar[10],top=-1;
void push(int a){
    if(top+1==10){
        printf("Error : insufficent menory");
    }
    else{
        ar[++top]=a;
    }
}
void pop(){
    if(top==-1){
        printf("Error : stack underflow");
    }
    else{
        printf("poped element is %d",ar[top--]);
    }
}
void peek(){
    printf("value of top of stack is %d",ar[top]);
}

int menu()
{	
	int ch;
	printf("\n1 - push\t2 - pop\t3 - peek\t4 - exit");
	printf("\n select an element :");
	scanf("%d",&ch);
	return ch;
}

void process()
{
	int ch;
	for(ch =menu();ch!=4;ch=menu())
	{
		switch(ch)
		{
			case 1:printf("\n enter the element ");
					scanf("%d",&ch);
					push(ch);
					break;
			case 2:pop();break;
			case 3:peek();break;
			default:printf("wrong choise ");
		}
	}
}
int main()
{
    process();
    return 0;
}
