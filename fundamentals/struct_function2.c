#include<stdio.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void funct(struct Books);

void main() {
    struct Books b1 = {"Harry Potter and the Philosophers Stone", "JK Rowling", "Fantasy", 1001001};
    struct Books b2 = {"Lord of the Rings: Fellowship of the Ring", "JRR Tolkein", "Adventure", 303154};
    funct(b1);
    funct(b2);
}

void funct(struct Books b) {
    printf("\n%s %s %s %d", b.title, b.author, b.subject, b.book_id);
}
