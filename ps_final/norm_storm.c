/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm_storm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aikram <aikram@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:14:31 by aikram            #+#    #+#             */
/*   Updated: 2023/02/02 15:08:19 by aikram           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chkr_dup(int *i, int *ints)
{
	while (++i[1] < (i[0] - 1))
	{
		i[2] = i[1];
		while (++i[2] < i[0] - 1)
			if (ints[i[1]] == ints[i[2]])
				write(2, "Error\n", 6);
		if (ints[i[1]] == ints[i[2]])
		{
			free(ints);
			exit(EXIT_FAILURE);
		}
	}
}