#include <stdio.h>

int main()
{
    float a, b, c;

    a = 1.345f;
    b = 1.123f;
    c = a + b;
    if (c == 2.468) {
        printf("Equal\n");
    } else {
        printf("Inequal! c=%.10f, or %f\n", c,c);
    }

    return 0;
}