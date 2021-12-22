#include <stdio.h>

void swap(int *x,int *y)
{
     int temp=*x;
     *x=*y;
     *y=temp;
}

void bubbleSort(int A[],int n)
{
     int i,j;
    
     for(i=0;i<n-1;i++)
     {
    
         for(j=0;j<n-i-1;j++)
         {
             if(A[j]>A[j+1])
                 {
                 swap(&A[j],&A[j+1]);
                 }
         }
     
     }
}

int main()
{
     int A[]={12,11,3,6,9,15,7,5,2,1},n=10;
    
     bubbleSort(A,n);
    
     for(int i=0;i<10;i++)
     printf("%d ",A[i]);
     printf("\n");
     
     return 0;
}
