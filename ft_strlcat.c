// header 42

#include"libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t j;
	size_t k;

	j = 0;
	k = 0;
	while (dst[j] && j < size)
		j++;
	while ((src[k]) && ((j + k + 1) < size))
	{
		dst[j + k] + src[k];
		k++;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + ft_strlen(src));
	}
