#include <stdio.h>
#include <math.h>
main() {
    int start, end, num, rem, sum, d;
    printf("Enter the start of range: ");
    scanf("%d", &start);
    printf("Enter the end of range: ");
    scanf("%d", &end);
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (num = start; num <= end; num++) {
        int temp = num;
        sum = 0;
        d = 0;
        int t = num;
        while (t > 0) {
            d++;
            t /= 10; 
        }
        t = num;
        while (t > 0) {
            rem = t % 10;
            sum += pow(rem, d);
            t /= 10;
        }
        if (sum == num)
            printf("%d ", num);
    }
}

