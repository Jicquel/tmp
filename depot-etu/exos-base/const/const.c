#include <stdlib.h>

void truc(const unsigned x)
{
    (void)x;
}

void bidule(unsigned x)
{
    (void)x;
}

int main(void)
{
    unsigned a = 0;
    const unsigned b = 1;
    truc(a);
    bidule(b);
    return EXIT_SUCCESS;
}
