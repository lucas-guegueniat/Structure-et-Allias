#include <stdio.h>

struct Book
{
    char title[100];
    char author[50];
    long int isbn;
    double price;
};

int main()
{
    struct Book book1 = {"Le Seigneur des anneaux", "J.R.R. Tolkien", 2266286269, 18.90};

    printf("Book title : %s\n", book1.title);
    printf("Book author : %s\n", book1.author);
    printf("Book ISBN : %li\n", book1.isbn);
    printf("Book price : %.2f €\n", book1.price);

    printf("size of Book structure: %zu bytes\n", sizeof(book1));
    printf("    size of title field: %zu bytes\n", sizeof(book1.title));
    printf("    size of author field: %zu bytes\n", sizeof(book1.author));
    printf("    size of ISBN field: %zu bytes\n", sizeof(book1.isbn));
    printf("    size of price field: %zu bytes\n", sizeof(book1.price));

    return 0;
}