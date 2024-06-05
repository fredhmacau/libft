/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmacau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 11:09:44 by fmacau            #+#    #+#             */
/*   Updated: 2024/05/17 11:25:51 by fmacau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int arg)
{
	if (arg >= 65 && arg <= 90)
	{
		return (arg + 32);
	}
	return (arg);
}