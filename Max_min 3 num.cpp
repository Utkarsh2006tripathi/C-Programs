//Min max of three :read 3 int print max and min without using array(use if/else).
#include<stdio.h>
main(){
	int f,s,t;
	printf("Enter first Number:");
	scanf("%d",&f);
	printf("Enter Second Number:");
	scanf("%d",&s);
	printf("Enter third Number:");
	scanf("%d",&t);
	if(f>s && f>t){
		printf("Max Number:%d\n",f);
	}
	else if(s>t && s>f){
		printf("Max Number:%d\n",s);
	}
	else{
		printf("Max Number:%d\n",t);
	}
	if(f<s && f<t){
		printf("Min Number:%d\n",f);
	}
	else if(s<t && s<f){
		printf("Min Number:%d\n",s);
	}
	else{
		printf("Min Number:%d",t);
	}
}
