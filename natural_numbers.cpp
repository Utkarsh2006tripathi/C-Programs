//2.Find Sum of First N natural Numbers.
#include<Stdio.h>
main(){
	int n,i,nl=0;
	printf("Enter the N terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		nl=nl+i;
	}
	printf("The Sum of %d Natural Number is :%d",n,nl);
}
