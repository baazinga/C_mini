#include <stdio.h>
int main()
{
    int i;
    char c;
    scanf("%d%c", &i, &c);
    printf("i=%d, c=%d, c='%c'\n",i,c,c);
    //空格的ASCII码是32

    return 0;
}