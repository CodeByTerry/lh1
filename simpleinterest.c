#include <stdio.h>

int main(){
    char p=`k`;
    int principal,time,rate;
    float interest;

    printf("Enter the principal":);
    scanf("%d",principal);

    printf("Enter the time":);
    scanf("%d",time);

    printf("Enter the rate of interest":);
    scanf("%d",rate);
    //simple nterest calculation

    printf("The simple interest is:%f.4f",interest=(principal*rate*time)/100);
    return 0;
}

