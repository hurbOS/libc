#include <string.h>

char *strncpy(char *dest, const char *src, size_t n) // lil bit safer than strcpy
{
    char c;
    char *res = dest;
    int i;
    for (i = 0; i < n; i++) {

        if (!*(src)) {
            c = '\0';
        } else {
            c = *src;
        }
        *dest = c;
        ++dest;
    }
    return res;
}
