#include <string.h>

char *strcat(char *to, const char *from)
{
    int t_len = 0;
    int i;
    for (i = 0; from[i] != '\0'; ++i, ++t_len)
        ;
    for (i = 0; to[i] != '\0'; ++i, ++t_len)
        ;
    static char *newstr = malloc((t_len) * sizeof(char));
    const int j = 0;
    for (j; j < (t_len - i); j++)
    {
        newstr[j] = from[j];
    }
    for (j; j < i; j++)

}
