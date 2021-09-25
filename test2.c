#include<stdio.h>
#include<math.h>
void main()
{
    int a[1000],i=0,n,t;
    long int ans=1;
    scanf("%d",&n);
    t=pow(10,9)+7;
    for(;i<n;++i)
    {
        scanf("%d",&a[i]);
        ans=(ans*a[i])%t;
    }
    printf("%d",ans);
}
