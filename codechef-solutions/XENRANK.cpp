#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int t,i;
	long long u,v,k,l;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld",&u,&v);
		k=u+v;
		l=k*(k+1)/2;
		printf("%lld\n",l+u+1);
	}
	return 0;
}
