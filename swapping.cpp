//WAP to swap two numbers using assignment operators only.
#include<Stdio.h>
main(){
	int a,b,c;
	printf("The value of a=");
	scanf("%d",&a);
	printf("The value of b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("The value of a=%d\n",a);
	printf("The value of a=%d",b);
}
