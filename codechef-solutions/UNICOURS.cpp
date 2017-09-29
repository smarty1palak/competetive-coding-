#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int t,i,n[10],j,a[10][100000],max;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<t;i++)
	{
		max=a[i][0];
		for(j=1;j<n[i];j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
		printf("%d\n",n[i]-max);
	}
	return 0;
}
