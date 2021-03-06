/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 12:02:38 by okres             #+#    #+#             */
/*   Updated: 2016/12/02 13:00:08 by okres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	ptr = (char*)malloc(size + 1);
	if (ptr == 0)
		return (0);
	ft_bzero(ptr, size + 1);
	return (ptr);
}
