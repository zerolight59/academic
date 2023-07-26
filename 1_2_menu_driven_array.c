#include<stdio.h>
int arr[10],pos=-1;
void insert(int e)
{
	if(pos<10)
	{
		arr[++pos] = e;
	}
	else
	{
		printf("\n\narray is full");
	}
}

void removearr()
{
	if(pos<=-1)
	{
		printf("\n\narray is empty");
	}
	else
	{
		printf("\nremoved element is %d",arr[pos--]);
	}
}

void display()
{	
	int i;
	printf("\n array is \t");
	for(i=0;i<=pos;i++)
	{	
	
		printf("%d\t",arr[i]);
	}
}

void sortarr()
{	
	int i=0,j=0,t=0;
	printf("\n sorted array is \t");
	for(i=0;i<pos;i++)
	{
		for(j=i;j<=pos;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	for(i=0;i<=pos;i++)
	{
		printf("%d\t",arr[i]);
	}
	
}

int menu()
{	
	int ch;
	printf("\n1 - insert\t2 - remove\t3 - sort\t4 - display\t5 - exit");
	scanf("%d",&ch);
	return ch;
}

void process()
{
	int ch;
	for(ch =menu();ch!=5;ch=menu())
	{
		switch(ch)
		{
			case 1:printf("\n enter the element ");
					scanf("%d",&ch);
					insert(ch);
					break;
			case 2:removearr();break;
			case 3:sortarr();break;
			case 4:display();break;
			
		}
	}
}


int main()
{	
	process();
	return 0;
}
