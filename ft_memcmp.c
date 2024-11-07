/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:03:44 by ahavu             #+#    #+#             */
/*   Updated: 2024/11/01 16:03:19 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	i = 0;
	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (new_s1[i])
	{
		if ((new_s1[i] - new_s2[i]) != 0 && i < n)
			return (new_s1[i] - new_s2[i]);
		i++;
	}
	if (new_s2[i] && i < n)
		return (0 - new_s2[i]);
	return (0);
}