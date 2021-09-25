
#include<stdio.h>
#include<string.h>
void main()
{
	char w[100],i=0,n,m,flag=1;
	scanf("%s",w);
	n=strlen(w);
	m=n/2;
	for(;i<=m;++i)
	{
		if(w[i]!=w[n-1-i])
		{
			printf("NO");
			break;
		}
	}
	if(!flag)
	    printf("YES");
}
