#include<stdio.h>
#include<math.h>
main() {
    int start, end, i, num, digit, count, sum;

    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    for(i = start; i <= end; i++) {
        num = i;
        count = 0;
        // Count digits
        while(num > 0) {
            count++;
            num = num / 10;
        }

        num = i;
        sum = 0;

        // Calculate Armstrong sum
        while(num > 0) {
            digit = num % 10;
            sum += pow(digit, count);
            num /= 10;
        }

        if(sum == i)
        {
        	printf("%d ", i);
		}
            
    }
}

