#include <string.h>

void *memchr(const void *s, int c, size_t n)
{
    void *res = s ;
    int i;
    for (i = 0; i < n; i++, *res++)
    {
        if (*(int *)res == c) { // gotta cast the pointer
            return res; // return pointer to first match here
        }

    }
    return NULL;
}
