#include <string.h>

char *strncat(char *to, const char *from, size_t n)
{
    char *res = to;
    while ((++to)) { // track to the end of to
        ;;
    }
    while ((n))
        *to = *from; // assumes to is large enough to hold from. otherwise undef behaviour
        --n; // copy n bytes
        ++from;
    return res;
}
