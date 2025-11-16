//WAP to check if num is Armstrong or not.
#include<stdio.h>
#include<math.h>
main(){
	int n,d,c=0,arm=0,temp;
	printf("Enter the Number:");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		c++;
		n=n/10;
	}
	n=temp;
	while(n>0){
		d=n%10;
		arm=arm+pow(d,c);
		n=n/10;
	}
	if(arm==temp){
		printf("Number is armstrong:%d",arm);
	}
	else{
		printf("No is not armstrong");
	}
}
