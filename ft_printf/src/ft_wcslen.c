/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcslen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoutik <abdelkarimoutik@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:42:38 by amoutik           #+#    #+#             */
/*   Updated: 2018/11/08 16:43:07 by amoutik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_wcslen(const wchar_t *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}
