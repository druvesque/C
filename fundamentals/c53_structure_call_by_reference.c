#include<stdio.h>

struct Book {
    char author[50];
    char subject[50];
    int book_id;
};

void pass_by_ref(struct Book*);

int main() {
    struct Book b1 = {"Douglas Adams", "Fiction", 110};
    pass_by_ref(&b1);
    return 0;
}

void pass_by_ref(struct Book *p1) {
    printf("\nAuthor: %s\nSubject: %s\nID: %d", p1->author, p1->subject, p1->book_id);
}
