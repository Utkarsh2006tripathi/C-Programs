//WAP to find Armstrong in range.
#include <stdio.h>
#include <math.h>
main() {
    int start, end, num, temp, rem, d;
    double sum;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for(num = start; num <= end; num++) {
        temp = num;
        d=0;
        sum=0;
        int n = temp;
        while(n > 0) {
            d++;
            n /= 10;
        }
        n = temp;
        while(n > 0) {
            rem = n % 10;
            sum += pow(rem, d);
            n /= 10;
        }

        if((int)sum == num) {
            printf("%d ", num);
        }
    }
}

