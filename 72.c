// Adding individual digits of an Entered Number
#include<stdio.h>
int main (){
    int num1, rem,mod,sum = 0;
    printf("Enter the number: \n");
    scanf("%d",&num1);


    while (num1 != 0){
    mod = num1 % 10;
    sum = sum+ mod ;
    num1 = num1 / 10 ;
   }

    printf("%d \n",sum);



    return 0;
}