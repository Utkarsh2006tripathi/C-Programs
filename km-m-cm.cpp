//Unit km-m-cm :accept an int print conversion with labels.
#include<stdio.h>
main(){
	int km;
	int  m,cm;
	printf("Enter the distance in kilometers:");
	scanf("%d",&km);
	m=km*1000;
	cm=m*100;
	printf("The distance in %dm\n",m);
	printf("The distance in %dcm",cm);
}
