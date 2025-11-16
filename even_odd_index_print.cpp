//.Sum of elements at even-indexed and odd-indexed positions separately.
#include <stdio.h>
main() {
    int arr[10],i;
    int evenSum = 0, oddSum = 0;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++) {
        if(i%2==0) {
            evenSum += arr[i];  
        } else {
            oddSum += arr[i];   
        }
    }
    printf("Sum of even indexed elements = %d\n", evenSum);
    printf("Sum of odd indexed elements = %d\n", oddSum);
}

