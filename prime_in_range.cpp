// Write a C program to print series of prime numbers in given range. Range must be created by taking input from user.
#include<stdio.h>
main(){
	int s,e,i,j,c;
	printf("Enter the starting range:");
	scanf("%d",&s);
	printf("Enter the ending range:");
	scanf("%d",&e);
	printf("Prime Numbers:\n");
	for(i=s;i<=e;i++){
		c=0;
		for(j=1;j<=i;j++){
			if(i%j==0){
				c++;
			}	
		}
		if(c==2){
		printf("%d\n",i);
	}
	}

	
}
