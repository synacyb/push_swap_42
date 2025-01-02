#include "libft.h"

int ft_valid_arguments(char *nptr)
{
    char *ptr = nptr;
    while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		nptr++;

	while (*nptr != '\0' && (*nptr >= '0' && *nptr <= '9'))
        nptr++;

    if (ft_atoi(ptr) <= 2147483647 && ft_atoi(ptr) >= -2147483648)
        return 1;
    else if (!*nptr)
        return 0;
    else
        return 1;
}