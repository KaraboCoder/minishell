/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pathjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 10:59:39 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/29 10:59:41 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_pathjoin(char *p1, char *p2)
{
	char	*tmp2;

	if (!p2 || !p1)
		return (NULL);
	if (!ft_strendswith(p1, "/"))
	{
		if (p2[0] == '/')
			return (ft_strjoin(p1, p2));
		else
		{
			tmp2 = ft_strjoincl(ft_strjoinch(p1, '/'), p2, 0);
			return (tmp2);
		}
	}
	else
	{
		if (p2[0] == '/')
			return (ft_strjoin(p1, p2 + 1));
		else
			return (ft_strjoin(p1, p2));
	}
}
