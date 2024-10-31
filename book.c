#include<stdio.h>
//define the structure named book
struct Book {
    char title[30];
    char author[30];
    int publication_year;
    char isbn[13];
    float price;
};
int main(){
    //1. initialize a variable of this structure type with the given data
    struct Book myBook = {
        "introduction to c programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };
    //2. print the values of the fields
    printf("Book details:\n",myBook.title);
    printf(" title:%s\n",myBook.author);
    printf("author:%s\n",mybook.author);
    printf("publication year:%d\n",myBook.publication_year);
    printf("ISBN:%s\n",mybook.isbn);
    printf("price:%.2f\n",myBook.price);

    //3. prompt the user to enter the details
    struct Book userBook;
    printf("\nEnter book details:\n");

    printf("title:");
    scanf("[^\n]%*c",useBook.title);
    
    printf("author:";
    scanf("%[^\n]%*c",userBook.author);

    printf("publication year:");
    scanf("%d",userBook.publication_year);

    printf("isbn:");
    scanf("%[^\n]%*c",userBook.isbn);

    printf("price:");
    scanf("%f",userBook.price);

    //print the entered values
    printf("\nEntered book details:\n");
    printf("title:%s\n",userBook.title);
    printf("author:%S\n",userBook.author);
    printf("publication year:%d\n",userBook.publication_year);
    printf("ISBN:%s\n",userBook.isbn);
    printf("price:%.2f\n",userBook.price);

    return 0;
}

    
    


        
