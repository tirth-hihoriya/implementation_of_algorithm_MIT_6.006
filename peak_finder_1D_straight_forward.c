#include <stdio.h>
int peak_finder(int a[],int len);           // O(n)
int main()
{
    int n;
    printf("\nEnter the number of input : ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p = peak_finder(a,n);

    printf("Peak is %d.",p);

}

int peak_finder(int a[],int len)
{
    int n=len;               //  do not use this_____ int n=(int)(sizeof(a)/sizeof(a[0]));
    if(a[0]>=a[1])
        return a[0];
    if(a[n-1]>=a[n-2])
        return a[n-1];

    for(int i=1;i<n-1;i++)
    {
        
        if(a[i]>=a[i-1] && a[i]>=a[i+1])
        return a[i];
        
    }



}