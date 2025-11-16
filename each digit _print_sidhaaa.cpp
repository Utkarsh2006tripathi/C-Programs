//Print each digit of number separately using loop(sidhaa)
#include <stdio.h>
int main() {
    int num;
    int div=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num/div>=10) {
        div=div*10;  
    }
    while (div>0){
        printf("%d\n",num/div);   
        num=num%div;            
        div=div/10;             
    }
}

