/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//sorting 
#include <stdio.h>
#include <stdlib.h>
#define MAX 10
void common(int[] , int  , int[] , int);
int main()
{
    int T,M,N,i,k;
    scanf("%d",&T);
    while(T--)
    {
        
        
        scanf("%d",&M);
        int arr1[M];
        
        for(i=0;i<M;i++)
        {
            scanf("%d",&arr1[i]);
            
        }
        scanf("%d",&N);
        int arr2[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr2[i]);
            
        }
        common(arr1 , M , arr2 , N);
       
   
        return 0;
    }
}
void common(int arr1[] , int M , int arr2[] , int N)
{
   
    int j = 0;
    int i =0;
    while(i < M && j < N)
    {
        
        
        if (arr1[i] == arr2[j])
        {
           
            printf("%d ",arr1[i]);
            
            i++;
           
            j++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }
}