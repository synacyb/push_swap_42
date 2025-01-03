#include "libft.h"

int ft_valid_arguments(char *nptr)
{
    while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
		nptr++;

	while (*nptr != '\0' && (*nptr >= '0' && *nptr <= '9'))
    {
        if (ft_atoi(nptr) > 2147483647 || ft_atoi(nptr) < -2147483648)
            return 1;
        nptr++;
    }

    if (!*nptr)
        return 0;
    else
        return 1;
}