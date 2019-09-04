#include <stdio.h>
int peak_finder(int a[],int f,int l);           //  O(lgn)

int main()
{
    int n;
    printf("\nEnter the number of input : ");
    scanf("%d",&n);

    int a[n];

    printf("Enter the elements :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p = peak_finder(a,0,n-1);

    
    printf("Peak is %d.",a[p]);

}

int peak_finder(int a[],int f,int l)
{
    int mid = (l+f)/2; 
    int p=mid;
                   
    if(mid != f  &&   a[mid]<a[mid-1])
        p = peak_finder(a,0,mid-1);
    else if(mid != l  &&  a[mid]<a[mid+1])
        p = peak_finder(a,mid+1,l);

    return p;

    



}