#include <stdio.h>
int sum( int a, int b ); ///���ŧi�����Ϊ�

int main()
{///�A�Τ��e,�n���ŧideclare �� �w�qdefine
    int ans =sum(2, 3);
    printf("ans: %d\n",ans);
}
int sum ( int a,int b )
{
    return a + b;
}///�^�� �^�ФH�a
