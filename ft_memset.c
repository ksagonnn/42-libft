// header 42

#include"libft.h"

void	*ft_memset(void *a, int c, size_t len)
{
	char *d;
	
	d = (char *)a;
	while (len > 0)
	{
		d(len - 1) = c;
		len--;
	}
	return (a);
}
