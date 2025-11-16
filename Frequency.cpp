//.Count frequency of each element in an array.
#include<stdio.h>
main(){
	int arr[10],num,f=0,i;
	printf("Enter the first 10 elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Num for search frequency:");
    scanf("%d",&num);
    for(i=0;i<10;i++){
    	if(arr[i]==num){
    		f++;
		}
	}
	printf("The Number %d is repead %d times",num,f);
}
