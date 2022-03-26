/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int binarysearch(int[] , int , int);
int main()
{
    int f = 0;
    int sum = 0;
    int size = 0;
    int key = 0;
    int test = 0;
    scanf("%d",&test);
    do{
    scanf("%d",&size);
    int arr[size];
    printf("\n");
    for (int i = 0 ; i < size ; i ++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0 ; i < size ; i ++)
    {
        for (int j = i + 1 ; j < size ; j ++)
        {
            sum = arr[i] + arr[j];
            for (int k = i + 1 ; k < size ; k++)
            {
                if (sum == arr[k])
                {
                    f = 1;
                    printf("%d,%d,%d",i+1,j+1,k+1);
                }
            }
        }
    }
    if (f == 0)
    printf("No Sequence found.");
    test --;
    }while(test > 0);
}
