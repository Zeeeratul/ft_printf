/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdelahay <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:57:01 by cdelahay          #+#    #+#             */
/*   Updated: 2018/11/09 17:49:52 by cdelahay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*s1;
	size_t	i;

	if (n > 0)
	{
		s1 = s;
		i = 0;
		while (i < n)
		{
			s1[i] = 0;
			i++;
		}
	}
}
