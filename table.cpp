//1.Print Table
#include<stdio.h>
main(){
	int n,i,tb;
	printf("Enter No:");
	scanf("%d",&n);
	printf("The Table of %d is:\n",n);
	for(i=1;i<=10;i++){
		tb=n*i;
		printf("%d\n",tb);
	}
}
