#include stdio.h
#include stdlib.h

int main()
{
    int n, p, q, r;
    scanf(%d, &n);
    p = n100;
    q = (n - 100p)10;
    r = n - 100p - 10q;

    printf(%d, p + q + r);
    return 0;
}
