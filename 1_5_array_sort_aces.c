#include <stdio.h>
int arr[10],n=-1;
void read(){
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void disp(){
    for(int i=0;i<n;i++){
        printf("\t%d ",arr[i]);
    }
}
void sort(){
    for(int i=0;i<n-1;i++){
        for(int j =i;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[i]^arr[j];
                arr[j]=arr[i]^arr[j];
                arr[i]=arr[i]^arr[j];
            }
        }
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
    printf("\n");
    printf("array before sort  :");
    disp();
    printf("\n");
    sort();
    printf("\n");
    printf("array before sort  :");
    disp();
    return 0;
}
