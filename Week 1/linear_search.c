/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

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
    for (int i = 0 ; i < size ; i ++)
    {
        if (arr[i] == key)
        {
            f = 1;
        }
    }
    if (f == 1)
        printf("Present %d",key);
    else
        printf("Not Present %d",key);
    test --;
    }while(test > 0);
}
    
