#include<stdio.h>
int main(){
    int age;
    float annual_income;
    //ask the customer to input their age and annual income
    printf("Enter your age:");
    scanf("%d",&age);

    printf("Enter your annual income:");
    scanf("%f",&annual_income);
    //use if....else to check the condition

    if(age>=21,annual_income>=21000){
        printf("congratulationsyou qualify for a loan.\n");
    }
    else{printf("unfortunately,we are unable to offer you a loan at this time.\n");
    }
    return 0;
}


