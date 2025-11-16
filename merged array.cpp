//Merge two arrays into a third array without sorting.
#include<stdio.h>
main() {
    int arr1[10], arr2[10], arr3[20]; 
    int i, n=0;
    printf("Enter the first 10 elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the second 10 elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<10;i++){
        arr3[n] = arr1[i];
        n++;
    }
    for(i=0;i<10;i++){
        arr3[n] = arr2[i];
        n++;
    }
    printf("Merged array:\n");
    for(i=0;i<20;i++){
        printf("%d\n",arr3[i]);
    }
}

