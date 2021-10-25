/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:48:37 by ksagon            #+#    #+#             */
/*   Updated: 2021/10/11 13:56:28 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)

{
	int				result;
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i] && i < n)
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	return (0);
}
