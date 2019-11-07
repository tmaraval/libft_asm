/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaraval <tmaraval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:24:17 by tmaraval          #+#    #+#             */
/*   Updated: 2019/11/07 15:08:44 by tmaraval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>

void	_ft_bzero(void *mem, size_t n);
void	test_ft_bzero_1_ok(void);
void	test_ft_bzero_2_ok(void);
void	test_ft_bzero_3_len_0(void);
void	test_ft_bzero_4_len_inf(void);

char	*_ft_strcat(const char *s1, const char *s2);
void	test_ft_strcat_1_ok(void);
void	test_ft_strcat_2_ko(void);
void	test_ft_strcat_3_ko(void);