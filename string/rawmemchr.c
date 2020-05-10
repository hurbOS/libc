#include <string.h>

void *rawmemchr(const void *s, int c) // dangerous function, will not halt until it's found
{ // no match = undefined behaviour
    void *res = s;
    while (*(int*)res++ != c) // spooky casting
        ;;
    return res;
}
