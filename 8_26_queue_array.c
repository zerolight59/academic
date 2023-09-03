#include<stdio.h>
int q[10];
int f=-1;
int r=-1;


void enqueue()
{
    if(r+1==10){
        printf("\nqueue is full");
    }
    else{
        
    	if(f==-1)
    	{
	    	f=0;
	    }
	    printf("enter the data :");
	    scanf("%d",&q[++r]);
	   
    }
}

void dequeue()
{
	if(f==-1)
	{
		printf("\n\nqueue is empty");
	}
	else
	{
		printf("\ndequeue element is %d",q[f]);
		if(f==r){
		    f=r=-1;
		}
		else{
		    f++;
		}
	}
}




int menu()
{	
	int ch;
	printf("\n1 - enqueue\t2 - Dequeue\t3 - exit");
	scanf("%d",&ch);
	return ch;
}

void process()
{
	int ch;
	for(ch =menu();ch!=3;ch=menu())
	{
		switch(ch)
		{
			case 1:enqueue();
					break;
			case 2:dequeue();break;
			
		}
	}
}


int main()
{	
	process();
	return 0;
}
