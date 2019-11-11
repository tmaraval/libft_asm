/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:38:46 by tmaraval          #+#    #+#             */
/*   Updated: 2019/11/11 10:18:54 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_isprint_2_false(void)
{
	printf(" [*] test on : %s\n", __FUNCTION__);
	assert(ft_isprint(-1) == isprint(-1));
	assert(ft_isprint(10) == isprint(10));
	assert(ft_isprint(15) == isprint(15));
	assert(ft_isprint(128) == isprint(128));
	assert(ft_isprint(-4) == isprint(-4));
	assert(ft_isprint(200) == isprint(200));
}

void	test_ft_isprint_1_true(void)
{
	int i;

	i = 0;
	printf(" [*] test on : %s\n", __FUNCTION__);
	while (i < 255)
	{
		if (isprint(i) != 0)
			assert(ft_isprint(i) != 0);
		else
			assert(ft_isprint(i) == 0);
		i++;
	}
}
