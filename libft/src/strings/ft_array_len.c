/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmac <cmac@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:49:41 by cmac              #+#    #+#             */
/*   Updated: 2022/09/28 21:50:07 by cmac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_array_len(char **array)
{
	int	len;

	len = 0;
	while (array && array[len])
		len++;
	return (len);
}
