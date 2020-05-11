#include <string.h>

/* returns pointer to last occurence of c in s, else returns the null byte of s */
char *strchrnul(const char *s, int c)
{
    char *res = NULL;
    while (*s++) {
        if (*s == c) {
            res = s;
        }
    }
    if (res != NULL) {
        return res;
    } else {
        return s;
    }
}
