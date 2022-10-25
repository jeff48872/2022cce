# 2022cce
week07
1.long long int可輸入較長的數字
```
#include <stdio.h>
int main()
{
    int n=9876543210;///可裝9-10位數
    printf("int 印出來 %d\n",n);///錯的

    long long int a=9876543210;///可裝19-20位數
    printf("long long int 印出來 %lld\n",a);
}
```
2.最大公因數, 改用 long long int 
```
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld", &a, &b);

    long long int ans;
    for (long long int i=1; i<=a; i++){
        if(a%i==0 && b%i==0 ) ans = i;
    }
    printf("³Ì¤j¤½¦]¼Æ¬O%lld\n", ans);
}
```
3.long long int輾轉相除法
```
#include <stdio.h>
int main()
{
    long long int a, b, c;
    scanf("%lld %lld", &a, &b);
    while(1){
        c=a%b;
        printf("a:%lld b:%lld c:%lld\n", a, b, c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("µª®×¬O: %lld\n",b);
}
```
4.剝皮
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;

    printf("現在的個位數:%d\n",n%10);
    n = n / 10;
}
```



week08
1.判斷質數
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int bad=0;
    for(int i=2; i<n; i++){
        if( n%i==0 ) bad=1;
    }
    if(bad==0) printf("Yes");
    else printf("No");
}
```
2.範圍裡有幾個質數
```
#include <stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		for(j=2;j<n;j++){
		if(i%j==0)
		{break;}
	}
	if(j==i)
	printf("%d ",i);
	}
}
```
3.增加迴圈的熟悉程度,輸入5個數字加起來
```
#include <stdio.h>
int main()
{
    printf("請輸入5個數字(要加起來): ");

    int n;
    int sum=0;
    for(int i=0; i<5; i++){
        scanf("%d", &n);
        sum +=n;
    }
    printf("總和是:%d",sum);
}
```
4.用for迴圈劃出直角三角形
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++) printf("*");
        for(int k=1;k<=n-i;k++) printf(" ");
        printf("\n");
    }
}
```
5.for迴圈印直角三角形(簡化)
```
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n;k++){
            if(k<=n-i) printf(" ");
            else       printf("*");
        }
        printf("\n");
    }
}
```
6.while迴圈印直角三角形
```
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	int i=1;
	while(i<=n){

		int k=1;
		while(k<=n){

			if(k<=n-i) printf(" ");
			else printf("*");

			k++;
		}
		printf("\n");
		i++;
	}
}
```
