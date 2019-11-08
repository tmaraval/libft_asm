/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_puts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 09:26:05 by tmaraval          #+#    #+#             */
/*   Updated: 2019/11/08 10:20:07 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_puts_null(void)
{
	printf(" [*] puts segfault so no need to test\n");
//	assert(puts(str) < 0);
//	assert(_ft_puts(str) < 0);
}

void	test_ft_puts_emtpy(void)
{
	char str[10];

	strcpy(str, "");
	assert(puts(str) >= 0);
	assert(_ft_puts(str) >= 0);
}

void	test_ft_puts_ok(void)
{
	char str[10];
	
	strcpy(str, "abcdefgh");
	assert(puts(str) > 0);
	assert(_ft_puts(str) > 0);
}