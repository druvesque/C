#include<stdio.h>

struct Books {
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

void print(struct Books);

int main() {
    struct Books b1 = {"Champion Mindset", "Patrick Mouratoglou", "Self-Improvement", 103};
    print(b1);
    return 0;
}

void print(struct Books b) {
    printf("\nTitle: %s\nAuthor: %s\nSubject: %s\nID: %d\n", b.title, b.author, b.subject, b.book_id);
}
