//Print Fibonacci series.
#include<stdio.h>
main(){
	int a=0,b=1,c,n,i;
	printf("Enter the terms,You want:");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	
	}
}
