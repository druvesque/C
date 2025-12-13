#include<stdio.h>

void vowel_consonant(char);

int main() {
    char c = 'A';
    vowel_consonant(c);
    c = 'v';
    vowel_consonant(c);
    c = '9';
    vowel_consonant(c);
    c = '@';
    vowel_consonant(c);
    return 0;
}

void vowel_consonant(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("\nVowel!");
    else if ((c >= 65 && c <= 90) || (c >= 97) && (c <= 122))
        printf("\nConsonant");
    else
        printf("\nNot an alphabet");
}
