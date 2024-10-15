#include<stdio.h>
int main() {
    int principal;
    float time;
    double rate;

    printf("Enter the principal:");
    scanf("%d", principal);

    printf("Enter the time:");
    scanf("%f",time);

    printf("Enter the rate:");
    scanf("%lf",rate);

    //simple interest calculation
    interest = (principal*time*rate)/100;

    printf("The simple interest is: %.4f",simple interest);

    return 0;
}