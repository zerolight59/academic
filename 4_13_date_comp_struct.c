
#include <stdio.h>
struct dates{
    int day;
    int month;
    int year;
};
struct dates d[2];

void read(){
    for(int i=0;i<2;i++){
        printf("day %d \n",i+1);
        printf("day (dd) :");
        scanf("%d",&d[i].day);
        printf("month (mm) :");
        scanf("%d",&d[i].month);
        printf("year(yyyy) :");
        scanf("%d",&d[i].year);
    }
}
void disp(){
    for(int i=0;i<2;i++){
        printf("day %d \n",i+1);
        printf("%d/%d/%d",d[i].day,d[i].month,d[i].year);
    }
}
void comp(){
    if(d[0].year==d[1].year){
        if(d[0].month==d[1].month){
            if(d[0].day==d[1].day){
                printf("\n\n\tboth are same day");
            }
            else{
                printf("\n\n\tboth are not same day");
            }
        }
        else{
                printf("\n\n\tboth are not same day");
            }
    }
    else{
                printf("\n\n\tboth are not same day");
            }
}
int main()
{   
    
    read();
    disp();
    comp();

    return 0;
}