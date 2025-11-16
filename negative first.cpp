//Rearrange array: move all negative numbers to beginning and positive to end without extra array.
#include <stdio.h>
main() {
    int arr[10],i;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++) {
        if(arr[i]<0){
        	printf("%d ",arr[i]);
		}
    }
    for(i=0;i<10;i++) {
        if(arr[i]>0){
        	printf("%d ",arr[i]);
		}
    }
    
}
