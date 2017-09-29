#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int t,n[10],a[10][20000],b[10][20000],s,s1,i,j;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++)
		 scanf("%d",&a[i][j]);
		for(j=0;j<n[i];j++)
		 scanf("%d",&b[i][j]);
	}
	for(i=0;i<t;i++)
	{
		for(j=0,s=0;j<n[i];j=j+2)
			s=s+a[i][j];
		for(j=1;j<n[i];j=j+2)
			s=s+b[i][j];
		for(j=0,s1=0;j<n[i];j=j+2)
		    s1=s1+b[i][j];
		for(j=1;j<n[i];j=j+2)
		    s1=s1+a[i][j];
		if(s<s1)
		 printf("%d\n",s);
		else
		 printf("%d\n",s1);
	}
	return 0;
}
