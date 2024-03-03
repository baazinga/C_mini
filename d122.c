#include <stdio.h>
int main()
{
    char c;
    char d;
    c = 1;
    d ='1';
    if ( c == d) {
        printf("Equal\n");
    } else {
        printf("Inequal\n");
    }
    printf("c = %d\n",c);
    printf("d = %d\n",d);

    return 0;
}