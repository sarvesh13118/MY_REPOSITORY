#include<stdio.h>
#define BOOK_COUNT 10
struct book{
    char name[50];
    int price;
};
int main(){
    struct book books[BOOK_COUNT];
    printf("Enter the details of the books:\n");
    for(int i = 0; i < BOOK_COUNT; i++){
        printf("Enter the name of book %d: ", i+1);
        scanf("%s", books[i].name);
        printf("Enter the price of book %d: ", i+1);
        scanf("%d", &books[i].price);
    }
    printf("The details of the books are:\n");
    for(int i = 0; i < BOOK_COUNT; i++){
        printf("Name: %s\n", books[i].name);
        printf("Price: %d\n", books[i].price);
    }
    return 0;
}