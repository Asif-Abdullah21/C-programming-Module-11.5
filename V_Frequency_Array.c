#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n+1],cnt[100001]={0};

    for(int i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
         cnt[a[i]]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n",cnt[i]);
    }
    


    
    return 0;
}