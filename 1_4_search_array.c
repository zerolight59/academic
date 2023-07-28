#include<stdio.h>
int arr[20],n;
void search(int e){
    int f=0;
    int i;
    for( i = 0;i<n;i++){
        if(e==arr[i]){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("\nElement %d found at postion %d",e,++i);
    }
    else{
        printf("\nElement not found");
    }
}

void insert(){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void display(){
    for(int i=0;i<n;i++){
        printf("\t%d ",arr[i]);
    }
}
int main(){
    int e;
    printf("enter the no of elements :");
    scanf("%d",&n);
    printf("\nenter the array elements :");
    insert();
    printf("\narray the elements are : ");
    display();
    printf("\nenter the elements to search :");
    scanf("%d",&e);
    search(e);
    
}
