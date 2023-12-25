#include <stdio.h>
int main ()
{
    int i;
    printf("printing odd numbers between 1 to 10: \n");

    for (i=0;i<=10;++i)
    {
        if (i%2==0)
        {
            continue ;
        }
        printf("%d ",i);
    }

printf("\n \n");
    printf("printing firt multiples of 4 between 1 to 10: \n");

    for (i=1;i<=10;++i)
    {
        if (i%4==0)
        {
        printf("the first multiple of 4 is %d \n",i);
        //break;
        }
    }



    return 0;
}