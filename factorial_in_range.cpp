// factorial in range 
#include<stdio.h>
int fact(int s,int e){
	int f,i,j;
	for(i=s;i<=e;i++){
		f=1;
		for(j=1;j<=i;j++){
			f=f*j;
		}
		printf("%d\n",f);
	}
}
main(){
	int st,en,f,i,j;
	printf("Enter the  starting range:");
	scanf("%d",&st);
	printf("Enter the  ending  range:");
	scanf("%d",&en);
//	printf("Factorial between %d to %d is:\n",s,e);
	fact(st,en);
}

