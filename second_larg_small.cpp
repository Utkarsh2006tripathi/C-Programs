//In array second largest and smallest
#include <stdio.h>
main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n], i;
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i]);
	}	
    int largest=arr[0], secondLargest=arr[0];
    int smallest=arr[0], secondSmallest=arr[0];
    for(i=1;i<n;i++){
    	//find largest
        if(arr[i]>largest){ 
		secondLargest=largest;
		largest=arr[i]; 
		}
        else if(arr[i]>secondLargest && arr[i]!=largest)
		{
			 secondLargest=arr[i];.
			 
		}
		//find smallest 
        if(arr[i]<smallest)
		{
		secondSmallest=smallest;
		smallest=arr[i];
		}
        else if(arr[i]<secondSmallest && arr[i]!=smallest){
        	secondSmallest=arr[i];
		} 
    }
    printf("Second Largest: %d\nSecond Smallest: %d\n", secondLargest, secondSmallest);
}

