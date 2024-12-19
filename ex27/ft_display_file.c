/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendoza <dmendoza@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 10:57:09 by dmendoza          #+#    #+#             */
/*   Updated: 2024/12/19 11:07:37 by dmendoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

void	ft_display_file(char *file)
{
	int		fd;
	int		b_read;
	char	buffer[BUF_SIZE];

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write (2, "Cannot read file.\n", 18);
		return ;
	}
	b_read = read(fd, buffer, BUF_SIZE);
	while (b_read > 0)
	{
		write(1, buffer, b_read);
		b_read = read(fd, buffer, BUF_SIZE);
	}
	close(fd);
}
