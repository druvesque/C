#include<stdio.h>
#include<string.h>
struct Book {
    char author[10];
    char subject[20];
    int book_id;
};

void main() {
    struct Book b1;
    strcpy(b1.author, "rowling");
    strcpy(b1.subject, "harrypotter");
    b1.book_id = 1001001;
    struct Book *ptr;
    ptr = &b1;
    printf("\n%s %s %d", ptr->author, ptr->subject, ptr->book_id);
    // printf("\n%s %s %d", (*ptr).author, (*ptr).subject, (*ptr).book_id);
    // can print using both ways
}
