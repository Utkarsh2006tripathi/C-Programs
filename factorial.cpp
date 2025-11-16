// recursion fact
#include<stdio.h>
int fun(int s,int e){
	int f,j,i;
	for(i=s;i<=e;i++){
		f=1;
		for(j=i;j>=1;j--){
			f=f*j;
		}
		
		
		
		printf("%d\n",f);
	}
	
}
//int ch(){
//	printf("Babu factorial aa gya...");
//}
main(){
	int st,en;
	printf("Enter the starting range:");
	scanf("%d",&st);
	printf("Enter the ending range:");
	scanf("%d",&en);
	fun(st,en);
//	ch();
}
