///了解 for迴圈的各種變形
#include <stdio.h>
int main()
{
    for( int i=0; i<3; i++){
        printf("迴圈(電腦習慣) i是%d\n", i);
    }
    for( int i=1; i<=3; i++){
        printf("迴圈(人類熟悉) i是%d\n", i);
    }
    for( int i=1; i<=3; i++){
        printf("倒過來的迴圈 a是%d\n", i);
    }
}
