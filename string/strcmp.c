#include <string.h>

int strcmp(char *s1, char *s2) {
	int i;
	while (s1[i] != '\0' && s2[i] != '\0') {
		if (s1[i] != s2[i])
			return s1[i]-s2[i];
		i++;
	}
	if ((s1[i] == s2[i]) == '\0')
		return 0;
	else return s1[i] - s2[i];
}
