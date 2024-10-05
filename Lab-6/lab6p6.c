#include <stdio.h>
int main()
{
    unsigned long long i = 1;
    unsigned long long a, n = 2;
    while (n <= 2097152)
    {
        a = i * n;
        if (a > 2097152) {
            break;
        }
        printf("%llu\t", a);
        i = n;
        n = a;
    }
    return 0;
}
