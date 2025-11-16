#include<stdio.h>
main(){
	int age=10;
	int *ptr=&age;
	printf("%p\n",&age);
	printf("%p\n",&ptr);
	printf("%p",ptr);
}
