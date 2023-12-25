//Selection sorting

#include<stdio.h>
int main()
{
    int n,i,j,min,temp;
    printf("Enter:\n");
    scanf("%d",&n);
    printf("Enter: \n");
    int arr[n];
    for (i=0;i<n;++i)
    scanf("%d",&arr[i]);

    for(i=0;i<n-1;++i)
    {

        min = i;
        for(j=i+1;j<n;++j)
        {
            if(arr[j] < arr[min])
            min = j;
        }
    if(min!=i)

    {
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
 }
    printf("The sorted array is: \n");
    for (i=0;i<n;++i)
    printf("%d ",arr[i]);

    return 0;
}