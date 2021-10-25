/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksagon <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:38:48 by ksagon            #+#    #+#             */
/*   Updated: 2021/10/14 15:25:57 by ksagon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>
#include<stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c >= '0')
		return (1);
	else
		return (0);
}

int	main()
{
	*int c = "hehehe";
	printf("%d", ft_isdigit);
}
