#include<stdio.h>
int main(){
    int book_ID,Due_date,Return_date,Days_overdue;

    printf("Enter the book ID:");
    scanf("%d",&Book_ID);

    printf("Enter the due date:");
    scanf("%d",&Due_date);

    printf("Enter the return date:");
    scanf("%d"&Return_date);

    printf("days overdue = return date-due date:");
    scanf("%d",&Days_overdue);
    return 0;
}