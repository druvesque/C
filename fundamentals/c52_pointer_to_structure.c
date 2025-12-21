#include<stdio.h>
#include<string.h>

struct Book {
    char author[50];
    char subject[50];
    int book_id;
};

int main() {
    struct Book b1;
    strcpy(b1.author, "Mark Twain");
    strcpy(b1.subject, "Fiction");
    b1.book_id = 104;
    struct Book *p1;
    p1 = &b1;
    printf("PRINT USING . OPERATOR");
    printf("\nAuthor: %s\nSubject: %s\nID: %d", b1.author, b1.subject, b1.book_id);
    printf("\n\nPRINT USING -> OPERATOR");
    printf("\nAuthor: %s\nSubject: %s\nID: %d", b1.author, b1.subject, b1.book_id);
    return 0;
}
