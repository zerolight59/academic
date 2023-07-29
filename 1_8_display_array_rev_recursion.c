#include <stdio.h>
int arr[10],n=-1;
void read(){
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void disp(int n){
    
    if(n>=0){
     
     printf("%d",arr[n]);
     disp(n-1);
     
    }
}
int main()
{
    printf("enter the no of elements");
    scanf("%d",&n);
    if(n>=10||n<0){
        printf("insuffient space");
    }
    printf("\n");
    read();
    printf("array elements   :");
    disp(n-1);
    return 0;
}