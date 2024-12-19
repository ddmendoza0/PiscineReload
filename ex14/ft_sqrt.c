/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmendoza <dmendoza@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:47:37 by dmendoza          #+#    #+#             */
/*   Updated: 2024/12/18 10:51:17 by dmendoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_guesser(int nb, int approx)
{
	if (approx * approx == nb)
		return (approx);
	if (approx * approx > nb)
		return (0);
	return (ft_sqrt_guesser(nb, approx + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_sqrt_guesser(nb, 0));
}
