// question 7 - Factorial by Recursion
#include <stdio.h>
int Factorial (int number){
    if (number ==1||number ==0)
    return 1;
    else 
    return number* Factorial(number-1);

}

int main (){
    int number;
    printf("enter the number for Factorial: \n ");
    scanf("%d",&number);
    printf("the factorial of %d is %d\n",number,Factorial(number));
    return 0;

}