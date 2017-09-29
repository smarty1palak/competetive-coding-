#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
	int t,i,n,m,j,a,b;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&m);
		for(j=0;j<m;j++)
		{
			scanf("%d%d",&a,&b);
		}
		if(n%2!=0)
		 printf("no\n");
		else
		 printf("yes\n"); 
	}
	return 0;
}
