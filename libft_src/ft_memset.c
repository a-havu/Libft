/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavu <ahavu@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:32:31 by ahavu             #+#    #+#             */
/*   Updated: 2024/12/21 09:53:50 by ahavu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_ptr;

	i = 0;
	new_ptr = (unsigned char *)s;
	while (i < n)
	{
		new_ptr[i] = (unsigned char)c;
		i++;
	}
	s = (void *)new_ptr;
	return (s);
}