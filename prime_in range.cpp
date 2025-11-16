//1.Prime no in range.
#include<stdio.h>
main(){
	int i,j,s,e,c;
	printf("Enter the starting range:");
	scanf("%d",&s);
	printf("Enter the ending range:");
	scanf("%d",&e);
	printf("The Prime NUmbers:\n");
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
