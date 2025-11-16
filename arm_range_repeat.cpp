#include<stdio.h>
#include<math.h>
main(){
	int num,s,e,i,c,d,arm;
	printf("Enter the starting range:");
	scanf("%d",&s);
	printf("Enter the ending range:");
	scanf("%d",&e);
	for(i=s;i<=e;i++){	
		num=i;
		c=0;
		while(num>0){
			c++;
			num=num/10;
		}
		num=i;
		arm=0;
		while(num>0){
		 d=num%10;
		 arm=arm+pow(d,c);
		 num=num/10;	
		}
		if(arm==i){
			printf("%d ",i);
		}
	}
}
