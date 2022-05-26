/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
void insertionsort(int[] , int);
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
    
    
        insertionsort(arr , size);
        for (int i = 0 ; i < size ; i ++)
        {
            printf("%d ",arr[i]);
        }
 
    }
    return 0;
}
void insertionsort(int arr[] , int size)
{
    int flag = 0;
    int comparisons = 0;
    int sum = 0;
    int shifts = 0;
    int i , temp , j = 0;
    for (i = 1 ; i < size ; i++)
    {
        //comparisons ++;
        temp = arr[i];
        j = i -1;
        while(j >= 0 && arr[j] > temp)
        {
            flag = 1;
            arr[j+ 1] = arr[j];
            j --;
            shifts ++;
            comparisons ++;
        }
        if (arr[j] < temp)
        {
            comparisons ++;
        }
        
       
         arr[j+1] = temp;
        
    }
     printf("No of shifts %d\n",shifts);
     printf("No of comparisons %d\n",comparisons);
    
}