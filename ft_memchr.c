// header 42

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *str;
	size_t i;
	
	str = (char *)s;
	i = 0;

	while (i < n)
	{
		if ((unsigned char)str[i] == (unisgned char)c)
			return ((char *)s + 1);
		i++;
	}
	return (NULL);
}
