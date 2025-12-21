#include<stdio.h>

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void print(char*, char*, char*, int);

int main() {
    struct Books b1 = {"Six Easy Pieces of Physics", "Richard Feynman", "Physics", 101};
    print(b1.title, b1.author, b1.subject, b1.book_id);
    return 0;
}

void print(char *title, char *author, char *subject, int id) {
    printf("\nTitle: %s\nAuthor: %s\nSubject: %s\nID: %d\n", title, author, subject, id);
}
