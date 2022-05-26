/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void selectionsort(int[] , int);
int main()
{
    
    int size = 0;
    
    int test = 0;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&size);
        int arr[size];
    
        for (int i = 0 ; i < size ; i ++)
        {
            scanf("%d",&arr[i]);
        }
    
    
        selectionsort(arr , size);
        for (int i = 0 ; i < size ; i ++)
        {
            printf("%d ",arr[i]);
        }
    }
}
void selectionsort(int arr[] , int size)
{
    int pos = 0;
    int min = 0;
    int swaps = 0;
    int comparisons = 0;
    for (int i = 0 ; i < size - 1 ; i ++)
    {
        min = arr[i];//finding min element by treating the first element as minimum
        pos = i;//storing index of i in each iteration
        for (int j = i + 1 ; j < size  ; j ++)
        {
            if (min > arr[j])//if first element is greater than any of the rest elements
            {
                comparisons ++;
                min = arr[j];//update min element
                pos = j;//store its position (index)
            }
            else 
                comparisons ++;
        }
        if (pos != i)
        {
            swaps ++;
          
            arr[pos] = arr[i];
            arr[i] = min;//swapping min element to i's index
        }
    }
        
    
    printf("Comparisons = %d\n",comparisons);
    printf("Swaps = %d\n",swaps);
    
    
}
