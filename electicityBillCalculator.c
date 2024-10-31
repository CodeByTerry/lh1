#include<stdio.h>
int main(){
    int customer_ID,units_consumed;
    char customer_name[50];
    float charge_per_unit,total_bill,surcharge = 0.0;

    //input customer details
    printf("Enter customer ID:");
    scanf("%d",&customer_ID);
    printf("Enter customer name:");
    scanf("%[^\n]s",&customer_name);//read string with spaces
    printf("Enter the units consumed:");
    scanf("%d",&units_consumed);

    //determine charge per unit based on units consumed
    if (units_consumed<=199){
        charge_per_unit = 1.20;
    } else if (units_consumed>=200 &&
    units_consumed<400){
        charge_per_unit = 1.50;
    } else if units_consumed>=400 && 
    units_consumed < 600) {
        charge_per_unit = 1.80;
    } else {
        charge_per_unit = 2.00;
    }
    //calculate total bill
    total_bill = units_consumed*charge_per_unit;

    //apply surcharge if total bill exceeds kshs.400
    if (total_bill > 400){
        surcharge = 0.15 * total_bill;
        total_bill += surcharge;
    }
    //ensure minimum bill is Kshs.100
    if(total_bill < 100){
        total_bill = 100;
    }
    //output the bill details
    printf("\nElectricity bill\n");
    printf("customer ID:%d\n",&customer_ID);
    printf("customer name:%s\n",&customer_name);
    printf("Units consumed:%d\n",&units_consumed);
    printf("charge per unit: kshs.%.2f\n",&charge_per_unit);
    printf("Total amount to pay: kshs.%.2f\n",&total_bill);

    return 0;
}


