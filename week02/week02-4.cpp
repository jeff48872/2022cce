///準備好整數 a, b
///讀入 a, b
///印出 a+b
#include <stdio.h>

int main()
{
    int a, b;
    printf("請用鍵盤輸入2個整數: " );
    scanf("%d", &a );
    scanf("%d", &b );
    printf("你讀入了 %d %d \n", a, b);
    printf("他們加起來是: %d \n", a+b);
}
