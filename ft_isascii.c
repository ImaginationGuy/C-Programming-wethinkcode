#include "libft.h"

t_bool	ft_isascii(intc )
{
	if ( c >= 0 && c <= 127)
	{
		return (true);
	}
	return (false);
}
