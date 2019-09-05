#include <stdio.h>

void merge(int a[],int f,int mid, int l)      //f->firrst , mid->middle , l->last
{
    int n1 = mid - f + 1;
    int n2 = l-mid;
    int x[n1],y[n2];
    int i,j,k;

    k=f;
    for(i=0;i<n1;i++)
    {
        x[i]=a[k++];
    }
    for(j=0;j<n2;j++)
    {
        y[j] = a[k++];
    }

    i=0;j=0;k=f;

    while(i<n1 && j<n2)
    {
        if(x[i]<y[j])
        {
            a[k++] = x[i++];
        }
        else
        {
            a[k++] = y[j++];
        }
    
    }

    while(i<n1)
    {
        a[k++] =x[i++];
    }
    while(j<n2)
    {
        a[k++] = y[j++];
    }
}

void merge_sort(int a[],int f, int l)
{
    if(f<l)
    {
    int mid = (f+l)/2; // or (l-f)/2 + f
    merge_sort(a,f,mid);
    merge_sort(a,mid+1,l);
    merge(a,f,mid,l);

}
}

int main()
{
    int n;
    printf("\nEnter the number of input: ");
    scanf("%d",&n);

    int a[n];
    printf("\nEnter the elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    merge_sort(a,0,n-1);

    printf("\nSorted list is : ");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");


}