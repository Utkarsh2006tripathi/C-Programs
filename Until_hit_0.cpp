//WAP  using do while loop to take input until user enters 0.
#include <stdio.h>
int main() {
    int num;
    do {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
        if (num != 0) {
            printf("You entered: %d\n", num);
        }
    } while (num != 0);
    printf("Program ended because you entered 0.\n");
}

