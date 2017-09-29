#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int t,i,m,n,j,d;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		m=0;
		scanf("%d",&n);
		int a[n];
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[j]);
		}
		if(n%2==0)
		{
			m=1;
		}
		else
		{
				for(j=1;j<n/2+1;j++)
				{
					if(a[j]!=j+1)
					 {
					 	m=1;
					 	goto g;
					 }
				}
				for(j=n-1,d=1;j>n/2;j--,d++)
				{
					if(a[j]!=d)
					{
						m=1;
						goto g;
					}
				}
		}
		g:
			if(m==1)
			 printf("no\n");
			else
			 printf("yes\n"); 
	}
	return 0;
}
