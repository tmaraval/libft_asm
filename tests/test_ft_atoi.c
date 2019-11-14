/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 12:10:14 by tmaraval          #+#    #+#             */
/*   Updated: 2019/11/14 11:00:01 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_atoi(void)
{
	int ret1;
	int ret2;
	int i;
	char *str;
	int	j;

	i = 0;
	printf(" [*] test on : %s\n", __FUNCTION__);
	j = 0;
	while (i < NTEST)
	{
		j = rand() % 1000;
		ret1 = 0;
		ret2 = 0;
		str = random_str_nb(j);
		ret1 = atoi(str);
		ret2 = ft_atoi(str);
		assert(ret1 == ret2);
		i++;
	}
	free(str);
}
