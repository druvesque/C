#include<stdio.h>
void funct(char*, char*, char*, int);

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void main() {
    struct Books b1 = {"Ramayan", "Valmiki", "History", 10234};
    struct Books b2 = {"Jay Sanhita", "Ved Vyas", "History", 10250};
    funct(b2.title, b2.author, b2.subject, b2.book_id);
}

void funct(char* t, char* a, char* s, int id) {
    printf("%s %s %s %d", t, a, s, id);
}
