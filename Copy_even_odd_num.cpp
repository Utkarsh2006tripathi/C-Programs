//Copy even numbers into one array, odd numbers into another.
#include<stdio.h>
main(){
	int arr[10],ear[10],oar[10],i,n=0,n1=0;
	printf("Enter the Elements:\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
		if(arr[i]%2==0){
			ear[n]=arr[i];
			n++;
		}
		else{
			oar[n1]=arr[i];
			n1++;
		}
	}
	printf("Even Array:\n");
	for(i=0;i<n1;i++){
		printf("%d\n",ear[i]);
		
	}
	printf("Odd Array:\n");
	for(i=0;i<n;i++){
		printf("%d\n",oar[i]);
		
	}
	
	
}
