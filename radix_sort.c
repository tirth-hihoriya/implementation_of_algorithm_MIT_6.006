#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    int size;
    printf("\nEnter the number of input: ");
    scanf("%d",&size);

        printf("\n");

    int a[size],b[size];
    
    srand(time(0));
    int k = rand()%100;
    
  

    srand(time(0));
    for(int i=0;i<size;i++)
        a[i] = rand()%10;

    
        
        
   

for(int i=0;i<size;i++)
        printf("%d ",a[i]);
        
    printf("\n");
    counting_sort(a,b,size,k);
    

    for(int i=0;i<size;i++)
        printf("%d ",b[i]);

    printf("\n\n");

}