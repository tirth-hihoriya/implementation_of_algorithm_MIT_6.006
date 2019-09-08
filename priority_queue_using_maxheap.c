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

int heap_extract_max(int a[],int size)
{
    if (size<1)
        printf("Heap Underflow..!!");
    int max = a[0];
    size--;
    max_heapify(a,0,size);

    return max;
}

void heap_increase_key(int a[],int i,int key)
{
    if(key<a[i])
        printf("New key is smaller than current key.");
    a[i] = key;
    while(i>0  && a[(i-1)/2]<a[i])
    {
        int temp = a[i];
        a[i] = a[(i-1)/2];
        a[(i-1)/2] = temp;
        i=(i-1)/2;
    }


}

void max_heap_insert(int a[],int key,int size)
{
    //size--;
    a[size] = INT_MIN;
    heap_increase_key(a,size,key);
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

    max_heap_insert(a,300,size);
    

    for(int i=0;i<size+1;i++)
    printf("%d ",a[i]);
     printf("\n\n");

}