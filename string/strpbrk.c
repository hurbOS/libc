#include <string.h>

/* find location of first matching char from *accept in *s */
char *strpbrk(const char *s, const char *accept)
{
    char chars[128] = {0};
    while (*accept++) {
        ++chars[*accept]; //INC is faster than writing 1 to the value
    }
    char* res = s;
    char c;
    while ((c = *res++)) {
        if (chars[c]) {
            return res;
        }
    }
    return NULL;
}
