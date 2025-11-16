#include<stdio.h>
main(){
	char ch;
	printf("Enter a characters:");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
		printf("Its is character");
	}
	else if(ch>='0' && ch<='9'){
		printf("Its is Digits");
	}
	else{
		printf("Its is special character");
	}
}
