#include <stdio.h>
#include <string.h>

struct Book
{
    char title[100];
    char author[50];
    long int isbn;
    double price;
};

void printBook(struct Book *book)
{
    printf("Book title : %s\n", book->title);
    printf("Book author : %s\n", book->author);
    printf("Book ISBN : %li\n", book->isbn);
    printf("Book price : %.2f\n", book->price);
}

void changePrice(struct Book *book, double percent){
    book->price *= 1+percent/100;
    int i = 0;
    if (percent < i){
        printf("Baisse de prix de %f pourcent\n", -percent);
    }
    if (percent > i){
        printf("Hausse de prix de %f pourcent\n", percent);
    }
}

int main()
{
    struct Book book1 = {"Le Seigneur des anneaux", "J.R.R. Tolkien", 2266286269, 18.90};
    struct Book book2 = {"Game Of Thrones, Le trône de fer", "George R.R. Martin", 2290208876, 22.0};

    printBook(&book1);
    printBook(&book2);
    changePrice(&book2, -5);
    printBook(&book2);

    // printf("size of Book structure: %zu bytes\n", sizeof(book1));
    // printf("    size of title field: %zu bytes\n", sizeof(book1.title));
    // printf("    size of title field: %zu bytes\n", sizeof(book2.title));
    // printf("    size of author field: %zu bytes\n", sizeof(book1.author));
    // printf("    size of author field: %zu bytes\n", sizeof(book2.author));
    // printf("    size of ISBN field: %zu bytes\n", sizeof(book1.isbn));
    // printf("    size of price field: %zu bytes\n", sizeof(book1.price));

    int i = strlen(book1.title);
    printf("Longueur du titre de book1 : %d\n", i);
    i = strlen(book1.author);
    printf("Longueur de l'auteur de book1 : %d\n", i);
    i = strlen(book2.title);
    printf("Longueur du titre de book2 : %d\n", i);
    i = strlen(book2.author);
    printf("Longueur de l'auteur de book2 : %d\n", i);

    return 0;
}