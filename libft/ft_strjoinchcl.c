/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinchcl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kngwato <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 11:03:30 by kngwato           #+#    #+#             */
/*   Updated: 2017/07/29 11:03:32 by kngwato          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinchcl(char *s1, char c)
{
	char	*new;

	if (!(new = ft_strjoinch(s1, c)))
		return (NULL);
	free(s1);
	s1 = NULL;
	return (new);
}
