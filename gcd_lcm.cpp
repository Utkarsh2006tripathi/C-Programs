//Write a program to find the GCD and LCM of two numbers.
#include<Stdio.h>
main(){
	int a,b,x,y,gcd,lcm;
	printf("Enter the First Value:");
	scanf("%d",&a);
	printf("Enter the Second Value:");
	scanf("%d",&b);
	x=a;
	y=b;
	while(x!=y){
		if(x>=y){
			x=x-y;
		}
		else{
			y=y-x;
		}
	}
	gcd=x;
	printf("Gcd:%d\n",gcd);
	lcm=a*b/gcd;
	printf("Lcm:%d\n",lcm);
}
