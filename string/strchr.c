#include <string.h>

/* returns pointer to last occurence of c in s, else returns NULL */
char *strchr(const char *s, int c)
{
    char *res = NULL;
    while (*s++) {
        if (*s == c) {
            return s;
        }
    }
    return NULL;
}
