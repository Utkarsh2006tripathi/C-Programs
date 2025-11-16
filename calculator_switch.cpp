//WAP to create simple calc using switch case .
#include<stdio.h>
main(){
	int a,b,c,ch;
	printf("Enter the first value:");
	scanf("%d",&a);
	printf("Enter the second value:");
	scanf("%d",&b);
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch) {
	case 1:
		c=a+b;
		printf("Addition=%d",c);
		break;
	case 2:
		c=a-b;
		printf("subtraction=%d",c);
		break;
	case 3:
		c=a*b;
		printf("Multiplication=%d",c);
		break;
	case 4:
		c=a/b;
		printf("Division=%d",c);
		break;
	case 5:
		c=a%b;
		printf("Moudulo=%d",c);
		break;
	default:
		printf("You Enter Something Wrong:");
		break;
}

	
}
