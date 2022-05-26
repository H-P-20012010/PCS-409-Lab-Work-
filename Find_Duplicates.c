#include <stdio.h>
#include<stdlib.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k,n1 = m - l + 1,n2 =  r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
    i = j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
int main()
{
    int T,N,i,f;
    scanf("%d",&T);
    while(T--)
    {
        f=1;
        scanf("%d",&N);
        int arr[N];
        for(i=0;i<N;scanf("%d",&arr[i++]));
        mergeSort(arr,0,N-1);
        for(i=0;i<N-1;i++)
            if(arr[i]==arr[i+1])
            {
                printf("YES \n");
                f=0;
            }
        if(f) printf("NO\n");
    }
    return 0;
}





