/*
11.Write a C program to calculate electricity bill based on following parameters:-

Units						Bill/unit

1-150 						2.40
For next 151-300 			3.00
For next more than 300 		3.20
 
*/
#include<stdio.h>
main(){
	int unit;
	float bill;
	printf("Enter the bill:");
	scanf("%d",&unit);
	if(unit>=1 && unit<=150){
		bill=2.40*unit;
	}
	else if(unit>=151 && unit<=300){
		bill=(150*2.40)+3.00*(unit-150);
	}
	else{
		bill=(150*2.40)+(150*3.00)+3.20*(unit-300);
	}
	printf("Your  bill:%.2f",bill);
}
