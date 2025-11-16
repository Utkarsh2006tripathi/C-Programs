//Product of digit in given num
#include<stdio.h>
main(){
	int n,d,s=1;
	printf("Enter the numbers:");
	scanf("%d",&n);
	while(n>0){
		d=n%10;
		s=s*d;
		n=n/10;
	}
	printf("Product of digit is:%d",s);
}


