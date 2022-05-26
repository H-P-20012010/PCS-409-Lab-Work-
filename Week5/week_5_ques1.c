//code_with_kunal
#include <stdio.h>
int main()
{
    int T,N,i;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        getchar(); 
        char arr[N],count[26];
        
        for(i=0;i<N;i++)
        {
            scanf("%c",&arr[i]);
            getchar();
        }
        
        
        int c = 0;
        for(i=0;i<26;i++)
            count[i]=0;
            
        for(i=0;i<N;i++)
            count[arr[i]-97]++;
        
        int max=count[0];
        
        
        for(i=0;i<26;i++)
            {
                
                if(count[i]>=max)
                {
                    max=count[i];
                   c = i + 97;
                   
                   
                   
                }
                
                
                
            }
        if(max == 1)
            printf("No Duplicates present");
        else
            
        printf("%c-%d",c,max);
    }
    return 0;
}

