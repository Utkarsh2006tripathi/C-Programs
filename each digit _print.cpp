//Print each digit of number separately using loop(Ulta)

#include <stdio.h>
main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Digits:\n");
    while(num>0) {
        printf("%d\n",num%10);  
        num=num/10;           
    }
}

