/*
Write a C program to compute gross salary based on following parameters:-
BasicSalary	 		HRA 	DA
1-4000				10% 	50%
4001-8000			15% 	60%
8001-12000			20% 	70%
More than 1200		25% 	80%

gs=bs+hra +da
*/
#include<Stdio.h>
main(){
	int bs,hra,da,gs;
	printf("Enter the Basic salary:");
	scanf("%d",&bs);
	if(bs>=1 && bs<=4000){
		hra=bs*10/100;
		da=bs*50/100;
	}
	else if(bs>=4001 && bs<=8000){
		hra=bs*15/100;
		da=bs*60/100;
	}
	else if(bs>= 8001 && bs<=12000){
		hra=bs*20/100;
		da=bs*70/100;
	}
	else{
		hra=bs*25/100;
		da=bs*80/100;
	}
	gs=bs+hra+da;
	printf("The Gross Salary:%d",gs);
	
}
