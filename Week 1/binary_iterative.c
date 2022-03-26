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
    int count = 0;
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
    
    scanf("%d",&key);
    f = binarysearch(arr , size , key);
    if (f == 1)
        printf("Present %d",key);
    else
        printf("Not Present %d",key);
    test --;
    }while(test > 0);
}
int binarysearch(int arr[] , int size , int key)
{
    int l = 0;
    int r = size - 1;
    while(l <= r)
    {
        int mid = (l + r)/2;
        if (arr[mid] == key) return 1;
        
        else if (arr[mid] < key)
            l = mid + 1;
        
        else
            r = mid -1;
    }
    return -1;
}