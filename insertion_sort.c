#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void insertion_sort(int a[],int n)
{
    int i,key;
    for(int j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;

        
    }
}


int main()
{
    int n;
    printf("\nEnter the number of input: ");
    scanf("%d",&n);

    int a[n];
    // printf("\nEnter the elements: \n");
    // for(int i=0;i<n;i++){
    //     scanf("%d",&a[i]);
    // }
    srand(time(0));
    for(int i=0;i<n;i++)
        a[i] = rand()%1000;


    insertion_sort(a,n);

    printf("\nSorted list is : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
