#include <stdio.h>
#include <string.h>
struct employee{
    int eno;
    char ename[20];
    float esal;
    int dno;
}e[10];
int n;

void read(){
    for(int i=0;i<n;i++){
        printf("employee %d \n",i+1);
        printf("eno :");
        scanf("%d",&e[i].eno);
        printf("name :");
        scanf(" %s",e[i].ename);
        printf(" ");
        printf("salary :");
        scanf("%f",&e[i].esal);
        printf("dno :");
        scanf("%d",&e[i].dno);
    }
}

void search(int el){
    int f;
    int i;
    for(i = 0;i<n;i++){
        if(el==e[i].eno){
            f=1;
            break;
        }
    }
    if(f==1){
        return i;
    }
    else{
        printf("\nemployee not found");
    }
    }

void sortsal(){
    struct employee t;
    int i;
    for(i=0;i<n-1;i++){
        for(int j =i;j<n;j++){
            if(e[i].esal<e[j].esal){
                t=e[i];
                e[i]=e[j];
                e[j]=t;
            }
        }
    }
    printf("\n\nThe sorted order of employee salary are:\n");
    for(i=0;i<n;i++)
    {
         
         printf("\nemployee name - %s -> salary - %f" ,e[i].ename,e[i].esal);

    }
}

void sortname(){
    struct employee t;
    int i;
    for(i=0;i<n-1;i++){
        for(int j =i;j<n;j++){
            if(strcmp(e[i].ename,e[j].ename)>0){
                t=e[i];
                e[i]=e[j];
                e[j]=t;
            }
        }
    }
      printf("\n\nThe sorted order of employee names are:\n");
    for(i=0;i<n;i++)
    {
         
         printf("\nemployee name - %s" ,e[i].ename);

    }
}

void del(){
    int pos;
    printf("\n\ndelete\nenter the employe no :");
    scanf("%d",&el);
    pos=search(el);
    for(int i = pos;i<n;i++){
        e[i]=e[i+1];
    }
    n--;
}

int main()
{   
    int el,pos;
    printf("enter the no of employes : ");
    scanf("%d",&n);
    read();
    printf("\nenter the elements to search :");
    scanf("%d",&el);
    pos=search(el);
    printf("\nemployee no  %d is %s",el,e[pos].ename);
    sortsal();
    sortname();
    del();
    return 0;
}
