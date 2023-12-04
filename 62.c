//question 6 --- factorial
#include <stdio.h>
int main (){
    int i,n,a=1;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        a=a*i;

    }
    printf("%d \n",a);
    return 0;

}