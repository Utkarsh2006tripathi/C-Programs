//1.Character specifier read a char print whether it is letter digit white space symbol.
#include <stdio.h>
main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("It is a Letter.\n");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("It is a Digit.\n");
    }
    else if (ch == ' ' || ch == '\n' || ch == '\t') {
        printf("It is a Whitespace.\n");
    }
    else {
        printf("It is a Symbol.\n");
    }
}

