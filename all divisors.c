#include<stdio.h>
void main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i=i+2)
	{
		printf("\n");
		printf("%d-",i);
		for(j=1;j<=i;++j)
			if(i%j==0)
				printf("%d ",j);
	}
	printf("%d\t%d",!i,!j);
}
