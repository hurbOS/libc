#include <string.h>

/* returns the length of the initial segment of str1 that are not in str2 */
size_t strcspn(const char *str1, const char *str2)
{
    char chars[128] = {0}; // ascii range
    while (*str2++) {
        ++chars[*str2]; // 1 = found
    int i = 0;
    while (chars[*str1]) {
        ++i;
        ++str1;
    }
    return i;
    }
}
