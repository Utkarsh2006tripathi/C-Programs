#include<stdio.h>
main(){
	char str[30];
	int l1=0,l2=0,l3=0,i;
	printf("Enter a characters:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
	if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z')){
		l1++;
	}
	else if(str[i]>='0' && str[i]<='9'){
		l2++;
	}
	else{
		l3++;
	}
	}
	printf("The total char is:%d\n",l1);
	printf("The total digit is:%d\n",l2);
	printf("The total special char  is:%d",l3);
}
