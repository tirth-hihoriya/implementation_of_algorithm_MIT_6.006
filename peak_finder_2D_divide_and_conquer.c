#include <stdio.h>

int peak_finder(int a[][4],int r,int c)         // O(nlgn)
{
    int i,j = c/2;
    int max = a[0][j];
    for(int z=0;z<4;z++)
    {
        if(a[z][j] > max)
        {
        max = a[z][j];
        i=z;
        }
    }

    int flag=1;
    while(flag)
    {
    if(j!=0 && a[i][j-1] > a[i][j])
        j=j-1;
    else if(j!=4-1 && a[i][j+1] > a[i][j])
        j=j+1;
    else
    {
        flag=0;
     max = a[0][j];
    for(int z=0;z<4;z++)
    {
        if(a[z][j] > max)
        {
        max = a[z][j];
        i=z;
        }
    }
    }
    }
    
    return a[i][j];


}

int main()
{

    int a[4][4] = {
        {14,13,12,10},{22,23,14,3},{15,10,33,17},{16,17,29,20}

    };

    printf("\n");
    for(int i=0 ;i<4;i++)
    {
        for(int j=0;j<4;j++){
            printf("%d ",a[i][j]);
        
    }printf("\n");

    }printf("\n");

    int p = peak_finder(a,4,4);

    printf("Peak  is : %d",p);





}