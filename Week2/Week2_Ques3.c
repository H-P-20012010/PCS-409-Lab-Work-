/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int binarysearch(int[] , int , int);
int main()
{
    int f = 0;
    int sum = 0;
    int size = 0;
    int key = 0;
    int test = 0;
    int count = 0;
    scanf("%d",&test);
    do{
    scanf("%d",&size);
    int arr[size];
    printf("\n");
    for (int i = 0 ; i < size ; i ++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    
    for (int i = 0 ; i < size ; i ++)
    {
        for (int j = i + 1; j < size ; j ++)
        {
            if (abs(arr[i] - arr[j]) == key)
            {
                
                count ++;
            }
        }
    }
    printf("%d",count);
    test --;
    }while(test > 0);
}
