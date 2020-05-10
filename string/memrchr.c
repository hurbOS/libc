#include <string.h>

void *memrchr(const void *s, int c, size_t n)
{
    int i;
    void *res = (s + n); // count backwards from this point until match found
    for (i = n; i >= 0; i--)
    {
        if (*(int *)res == c) // need to cast this baby
        {
            return res;
        }
        --res;
    }
    return NULL;
}
