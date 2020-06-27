#include <string.h>
 
size_t strlen(const char *str)
{
    const char *b = str;
    while (*b++) {
        ;;
    }
    return (size_t)(b - str);
}
