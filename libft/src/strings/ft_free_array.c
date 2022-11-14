/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseijo-p <jseijo-p@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:50:19 by jseijo-p          #+#    #+#             */
/*   Updated: 2022/11/01 18:22:15 by cmac             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_free_array(char **array)
{
	char	**tmp;

	if (!array)
		return ;
	tmp = array;
	while (*array)
	{
		free(*array);
		array++;
	}
	free(*array);
	free(tmp);
}
