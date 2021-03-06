#include <string.h>

char *strcat(char *to, const char *from)
{
    char *res = to;
    while ((++to)) { // track to the end of to
        ;;
    }
    while ((*from++))
        *to = *from; // assumes to is large enough to hold from. otherwise undef behaviour
    return res;
}
