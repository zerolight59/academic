#include<stdio.h>
int insert(int arr[],int pos,int e)
{
	if(pos<10)
	{
		arr[++pos] = e;
	}
	else
	{
		printf("\n\narray is full");
	}
	return pos;
}

int removearr(int arr[],int pos)
{
	if(pos<=-1)
	{
		printf("\n\narray is empty");
	}
	else
	{
		printf("\nremoved element is %d",arr[pos--]);
	}
	return pos;
}

int display(int arr[],int pos)
{	
	int i;
	printf("\n array is \t");
	for(i=0;i<=pos;i++)
	{	
	
		printf("%d\t",arr[i]);
	}
	return pos;
}

int sortarr(int arr[],int pos)
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
    
    return pos;
}

int menu()
{	
	int ch;
	printf("\n1 - insert\t2 - remove\t3 - sort\t4 - display\t5 - exit");
	printf("\n select an element :");
	scanf("%d",&ch);
	return ch;
}

void process()
{
    int arr[10],pos=-1;
	int ch;
	for(ch =menu();ch!=5;ch=menu())
	{
		switch(ch)
		{
			case 1:printf("\n enter the element ");
					scanf("%d",&ch);
					pos = insert(arr,pos,ch);
					break;
			case 2:pos = removearr(arr,pos);break;
			case 3:pos = sortarr(arr,pos);break;
			case 4:pos = display(arr,pos);break;
			
		}
	}
}


int main()
{	
	process();
	return 0;
}
