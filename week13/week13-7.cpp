#include <stdio.h>
int main()
{
	int a[11],count=0;
	int i=0,x,j=0;
	scanf("%d",&a[0]);
	while(a[i]!=0)
	{
		i++;
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	while (a[j]!=0)
	{
		if(a[j]==x)
			count++;
			j++;
	}
	printf("%d\n",count);
}
