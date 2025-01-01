#include "libft.h"

int ft_valid_arguments(char *nptr)
{
    while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		nptr++;

	while (*nptr != '\0' && (*nptr >= '0' && *nptr <= '9'))
        nptr++;
    if (!*nptr)
        return 0;
    else
        return 1;
}