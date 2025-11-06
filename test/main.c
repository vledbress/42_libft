#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
	const char *str = "ilka pidor";
	char *z = ft_strdup(str);
	
	printf("%s\n", z);

	z[5] = 'z';

	printf("%s\n", z);

	free(z);

    return 0;
}