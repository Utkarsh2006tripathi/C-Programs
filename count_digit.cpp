//Count total digit in a given num using loop.
#include<stdio.h>
main(){
	int num,d,c=0;
	printf("ENter the Number:");
	scanf("%d",&num);
	while(num>0){
		d=num%10;
		c++;
		num=num/10;
	}
	printf("The total digit:%d",c);
}
