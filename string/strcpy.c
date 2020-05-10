#include <string.h>

char *strcpy(char *dest, const char *src) // strcpy is unsafe by specification, pls no bully
{
    char c;
    char *res = dest;
    while ((c = *src++)) { // advance src ptr
        *dest = c;
        ++dest; //same thing
    }
    *dest = '\0'; // terminate dest str
    return res;
}
