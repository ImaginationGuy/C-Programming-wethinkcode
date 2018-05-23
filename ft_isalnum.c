#include "libft.h"

t_bool	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || ( c >= 'A' && c <= 'Z') || ( c >= '0' && c <= '9')
			{
				return (true);
			}
			return (false);
}
