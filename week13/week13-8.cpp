#include <stdio.h>
int main()
{
	int n,ans=0,i;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		ans=ans+i*(i+1);
	}
	printf("%d\n",ans);
}
