#include <stdio.h>
int sum( int a, int b ); ///先宣告它的形狀

int main()
{///再用之前,要先宣告declare 或 定義define
    int ans =sum(2, 3);
    printf("ans: %d\n",ans);
}
int sum ( int a,int b )
{
    return a + b;
}///回傳 回覆人家
