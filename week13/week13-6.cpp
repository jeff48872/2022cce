#include <stdio.h>
#include <string.h>
int main()
{
	char a[999];
	scanf("%s",a);
	int i,ans=0,n=1;
	for(i=strlen(a)-1;i>=0;i--){
	ans=ans+(a[i]-'0')*n;
	n*=2;
	}
	printf("%d\n",ans);
}
