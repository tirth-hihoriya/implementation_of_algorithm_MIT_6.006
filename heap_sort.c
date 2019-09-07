#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void max_heapify(int a[],int i,int size)      //  O(lgn)
{
    int l = 2*i+1;
    int r = 2*i+2;
    int max;

    if(l<size && a[l]>a[i])
        max = l;
    else max = i;
    if(r<size && a[r]>a[max])
        max = r;
    if(max != i)
    {
        int temp = a[i];
        a[i]=a[max];
        a[max] = temp;
        max_heapify(a,max,size);
    }
    
        
}

void build_max_heap(int a[],int size)          // O(n)
{
    
    for(int i=size-1;i>=0;i--)
        max_heapify(a,i,size);
}

void heap_sort(int a[],int size)              //  O(nlgn)
{
    int heap_size=size;
    build_max_heap(a,size);
    for(int i=size-1;i>0;i--)
       { int temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        heap_size--;
        max_heapify(a,0,heap_size);
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

    heap_sort(a,size);
    

    for(int i=0;i<size;i++)
    printf("%d ",a[i]);

    printf("\n\n");

}