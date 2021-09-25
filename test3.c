#include<stdio.h>
#include<string.h>
void main()
{
    char w[10000],v[10000];
    int n=0,i,j,m,k;
    scanf("%d",&m);
    for(k=0;k<m;++k)
    {
    scanf("%s%s",w,v);
    for(i=0;w[i]!='\0';++i)
        for(j=0;v[j]!='\0';++j)
            if(w[i]==v[j])
                n++;
    i=strlen(w);
    j=strlen(v);
    i+=j;
    printf("%d",i-2*n);
    }
}
