//Bubble short............................................
#include <stdio.h>
int main ()  
    {
    int n,i,j,temp;
    printf("Enter numbers of elements in your array :\n");
    scanf("%d",&n);
    int sort [n];
    printf("Enter elements in your array :\n");
    for(i=0;i<n;++i)
    scanf ("%d",& sort[i]);


    for (i=0;i<n-1;++i){
        for (j=0;j<n-i-1;j++)
        {
            if (sort[j]>sort[j+1])
            {
                temp=sort[j];
                sort[j]=sort[j+1];
                sort[j+1]=temp;
            }

        }
    }
        printf("the sortd value is ");
        for(i=0;i<n;++i)
        {
            printf("%d ",sort[i]);
        }
    
return 0;

}