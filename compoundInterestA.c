#include<stdio.h>
int main(){
    int principal;
    int number_of_compounded_years;
    float rate;
    double amount,total_number_of_years;

    printf("Enter principal:");
    scanf("%d",&principal);

    printf("Enter number of compounded years:");
    scanf("%d",&number_of_compounded_years);

    printf("Enter rate:");
    scanf("%f",&rate);

    printf("Total number of years:");
    scanf("%lf",&total_number_of_years);
    amount=principal*pow((1+rate/number_of_compounded_years),(number_of_compounded_years*total_number_of_years));
    printf("amount:%.2lf",amount);

    return 0;
}
