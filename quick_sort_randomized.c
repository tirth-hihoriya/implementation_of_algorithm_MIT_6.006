#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int partition(int a[],int p,int r)
{
    int pivot = a[r];
    int i = p-1;
    for(int j=p;j<r;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp2 = a[i+1];
            a[i+1] = a[r];
            a[r] = temp2;

     return i+1;
}

int randomized_partition(int a[],int p,int r)
{
    int i = rand()%(r-p+1) + p;
    int temp = a[r];
    a[r] = a[i];
    a[i] = temp;
    partition(a,p,r);
}

void quick_sort(int a[],int p,int r)
{
    if(p<r)
    {
        int q = randomized_partition(a,p,r);
        quick_sort(a,p,q-1);
        quick_sort(a,q+1,r);
    }
}



int main()
{
    int size;
    printf("\nEnter the number of input: ");
    scanf("%d",&size);

        printf("\n");

    int a[size];
   srand(time(0));
    for(int i=0;i<size;i++)
        a[i] = rand()%100;

for(int i=0;i<size;i++)
    printf("%d ",a[i]);
    printf("\n\n");

    quick_sort(a,0,size-1);
    

    for(int i=0;i<size;i++)
    printf("%d ",a[i]);
     printf("\n\n");
 
}