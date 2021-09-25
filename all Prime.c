#include<stdio.h>
void main()
{
    int n,i,j,flag;
    scanf("%d",&n);
    printf("2 ");
    for(i=3;i<=n;i=i+2)
    {
        flag=0;
        for(j=3;j<i;j=j+2)
        {
            if(i%j==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
            printf("%d ",i);
    }
}
