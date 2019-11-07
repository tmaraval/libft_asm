/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 14:21:03 by tmaraval          #+#    #+#             */
/*   Updated: 2019/11/07 15:08:06 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_strcat_3_ko(void)
{
	char	s1[16];
	char	s2[8];
	char	*ret;

	printf(" [*] test on : %s\n", __FUNCTION__);
	strcpy(s1, "12345678");
	strcpy(s2, "abcdef");
	ret = _ft_strcat(0, s2);
	assert(ret == 0);
}

void	test_ft_strcat_2_ko(void)
{
	char	s1[16];
	char	s2[8];
	char	*ret;

	printf(" [*] test on : %s\n", __FUNCTION__);
	strcpy(s1, "12345678");
	strcpy(s2, "abcdef");
	ret = _ft_strcat(s1, 0);
	assert(strcmp(s1, "12345678") == 0);
	assert(ret == s1);
}

void	test_ft_strcat_1_ok(void)
{
	char	s1[16];
	char	s2[8];
	char	*ret;

	printf(" [*] test on : %s\n", __FUNCTION__);
	strcpy(s1, "12345678");
	strcpy(s2, "abcdef");
	ret = _ft_strcat(s1, s2);
	assert(strcmp(s1, "12345678abcdef") == 0);
	assert(ret == s1);
}