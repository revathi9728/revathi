
#include <stdio.h>

int main() {
int arr[100],i,j,n,counter;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the elements of the array \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array is -");
    for(i=0;i<n;i++)
    {
        printf("\t %d",arr[i]);
    }
    printf("\n all the prime numbers in the array are:");
    for(i=n-1;i>=0;i--)
    {
        counter=0;
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                counter=1;
                break;
            }
        }
        if(counter==0)
        {
            printf("\t %d",arr[i]);
        }
    }

    return 0;
}