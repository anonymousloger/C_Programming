#include<stdio.h>
void main()
{
	int no,c,ans,i,j;
	scanf("%d",&c);
	for(i=0;i<c;++i)
	{
		ans=0;
		scanf("%d",&no);
		for(j=1;j<=no;++j)
			if(no/j<no)
				ans++;
		printf("%d\n",ans);
	}
}
