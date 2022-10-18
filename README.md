# 2022cce
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
