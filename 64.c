// question - 15 --Armstrong number
#include <stdio.h>
#include <math.h>

int main ()
{

    int a,b,c,d,e,n,num,num2;

    printf("enter number to check.\n");
    scanf("%d",&num);
    printf("enter digits in number.\n");
    scanf("%d",&n);

    a=num%10;
    b=num/10;
    c=b%10;
    d=b/10;
    e=d%10;
    
   num2= pow(a,n)+pow(c,n)+pow(d,n);
   if(num2==num)
   
   printf("no is armstrong .\n");
    

    return 0;

}