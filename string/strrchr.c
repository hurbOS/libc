#include <string.h>

/* returns pointer to last occurence of c in s, else returns NULL */
char *strrchr(const char *s, int c)
{
    char *res = NULL;
    while (*s++) {
        if (*s == c) {
            res = s;
        }
    }
    return res;
}
