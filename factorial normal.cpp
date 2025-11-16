#include<stdio.h>
int fact(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
main(){
	int n,f;
	printf("Enter the Number for fact");
	scanf("%d",&n);
	f=fact(n);
	printf("Factorial is :%d",f);
}
