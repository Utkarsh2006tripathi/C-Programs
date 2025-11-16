//Write a C program to find volume and surface area of cuboid.
#include<stdio.h>
main(){
	int l,b,h,sa,v;
	printf("Enter the Length:");
	scanf("%d",&l);
	printf("Enter the Bredth:");
	scanf("%d",&b);
	printf("Enter the Height:");
	scanf("%d",&h);
	v=l*b*h;
	sa=2*(l*b+b*h+h*l);
	printf("The Volume is:%d\n",v);
	printf("The surface area is:%d",sa);
}
