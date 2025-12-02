#include<stdio.h>
#include<string.h>

struct Book {
    char author[10];
    char subject[20];
    int book_id;
};

void pass_by_ref(struct Book *);

void main() {
    struct Book b1 = {"Ron", "Verilog", 1234};
    pass_by_ref(&b1);
}

void pass_by_ref(struct Book *b) {
    printf("\n%s %s %d", b->author, b->subject, b->book_id);
    // printf("\n %s %s %d", (*b).author, (*b).subject, (*b).book_id);
}
