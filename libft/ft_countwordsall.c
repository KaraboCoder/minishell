/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwordsall.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 10:53:29 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/29 10:53:31 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwordsall(char const *str)
{
	int count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (IS_SPACE(str[i]))
			i++;
		if (!IS_SPACE(str[i]) && str[i] != '\0')
			count++;
		while (!IS_SPACE(str[i]) && str[i] != '\0')
			i++;
	}
	return (count);
}
