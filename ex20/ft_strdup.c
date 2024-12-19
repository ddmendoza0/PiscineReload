/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendoza <dmendoza@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:39:28 by dmendoza          #+#    #+#             */
/*   Updated: 2024/12/18 11:45:37 by dmendoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

char	*ft_memory_allocation(int size)
{
	char	*mem_ptr;

	mem_ptr = (char *)malloc(size * sizeof(char));
	if (mem_ptr == NULL)
		return (NULL);
	return (mem_ptr);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	size = ft_strlen(src);
	dest = ft_memory_allocation(size);
	if (dest == NULL)
		return (NULL);
	i = -1;
	while (src[++i])
		dest [i] = src[i];
	dest[i] = '\0';
	return (dest);
}
