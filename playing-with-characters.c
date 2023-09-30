#include <stdio.h>
int main() {
    char ch;
    char s[100];
    char sen[100];

    // Input a character
    scanf(" %c", &ch);
    printf("%c\n", ch);

    // Input a string
    scanf("%s", s);
    printf("%s\n", s);

    // Input a sentence
    scanf(" %[^\n]s", sen);
    printf("%s\n", sen);

    return 0;
}
