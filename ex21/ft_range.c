/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendoza <dmendoza@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:48:26 by dmendoza          #+#    #+#             */
/*   Updated: 2024/12/18 11:48:47 by dmendoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	ft_rangelen(int min, int max)
{
	size_t	i;

	i = 0;
	if (min > max)
		return (0);
	i = max - min;
	return (i);
}

int	*ft_memory_allocation(long size)
{
	int	*mem_ptr;

	mem_ptr = (int *)malloc(size * sizeof(int));
	if (mem_ptr == NULL)
		return (NULL);
	return (mem_ptr);
}

int	*ft_range(int min, int max)
{
	size_t	size;
	int		*dest;
	long	i;

	dest = NULL;
	size = ft_rangelen(min, max);
	if (size == 0)
		return (dest);
	dest = ft_memory_allocation(size);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (min < max)
		dest[i++] = min++;
	return (dest);
}
