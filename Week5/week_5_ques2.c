/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//sorting 
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void printArray(int A[] , int N);
void quick_sort(int A[] , int l , int h);
int partition(int A[] , int l , int h);
void foundpair(int[] , int  , int);
int main()
{
    int T,N,i,k;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        
        int arr[N],count[26];
        
        for(i=0;i<N;i++)
        {
            scanf("%d",&arr[i]);
            
        }
        scanf("%d",&k);
        quick_sort(arr , 0 , N-1);
        foundpair(arr , k , N);
   
   return 0;
    }
}
int partition(int A[] , int l , int h)
{
	int pivot = A[l];
	int i =  l - 1;
	int j = h + 1;
	while(1)
	{
		do
		{
			i++;
			
		}while(A[i] < pivot);
		do
		{
			j --;
			
		}while(A[j] > pivot);
	    if (i >= j)
	    {
	    	return j;
		}
		int temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}
}

void quick_sort(int arr [] , int l , int h)
{
	if (l < h)
	{
		int p = partition(arr , l , h);
		quick_sort(arr , l , p);
		quick_sort(arr , p + 1 , h);
	}
}
void foundpair(int arr[] , int key , int size)
{
   int f = 0;
    int l = 0 , r = size - 1;
    while(l <= r)
    {
        int sum = arr[l] + arr[r];
        if (sum == key)
        {
            printf("%d,%d ",arr[l],arr[r]);
            f = 1;
            l++;
            r--;
        }
        else if (sum > key)
            r--;
        
        else
            l++;
        
    }
    if (f == 0)
        printf("No Such Pair Exist");
}