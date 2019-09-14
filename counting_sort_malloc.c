#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void counting_sort(int a[],int b[],int size, int k)
{
    int *c;
    c = (int*)malloc((k+1)*sizeof(int));
    
    for(int i=0;i<=k;i++)
    {
        *(c+i) = 0;
    }

    for(int j=0;j<size;j++)
    {
        *(c+ a[j]) += 1;    
    }

    for(int i=1;i<=k;i++)
    {
        c[i] += c[i-1];
    }

    

    for(int j=size-1;j>=0;j--)
    {
        b[*(c + a[j])-1] = a[j];
        (*(c+a[j]))--;
    }

}



int main()
{
    int size;
    printf("\nEnter the number of input: ");
    scanf("%d",&size);

        printf("\n");

    int a[size],b[size];
    
    //srand(time(0));
   // int k = rand()%100;
    
    int max = 0;

    srand(time(0));
    for(int i=0;i<size;i++)
        a[i] = rand()%10;

    for(int i=0;i<size;i++)
        if(a[i]>max)
            max = a[i];
        
        
    // for(int i=0;i<size;i++)
    //     scanf("%d",&a[i]);
    

for(int i=0;i<size;i++)
        printf("%d ",a[i]);
        
    printf("\n");
    counting_sort(a,b,size,max);
    

    for(int i=0;i<size;i++)
        printf("%d ",b[i]);

    printf("\n\n");

}