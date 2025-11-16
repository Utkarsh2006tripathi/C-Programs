#include<stdio.h>
main(){
	int arr[3];
	int i;
	printf("Enter the elements:\n");
	for(i=0;i<3;i++){
		scanf("%d",&arr[i]);
	}
	
	
	for(i=0;i<3;i++){
		printf("Value of array:%p\n",&arr[i]);
	}
	
	printf("Value of array:%p\n",&arr);
}
