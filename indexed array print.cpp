//Search a number in array and return its index.
#include<Stdio.h>
main(){
	int arr[10],i,num;
	printf("Enter 10 elements:\n");
    for(i=0;i<10;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the num for search:");
    scanf("%d",&num);
    printf("%d is number in %d indexed",num,i);
    for(i=0;i<10;i++) {
       if(arr[i]==num){
       	printf("%d ",i);
	   }
    }
}
