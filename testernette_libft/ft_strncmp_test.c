/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:37 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:48:24 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strncmp_test(int *value)
{
    test_headline("ft_strncmp.c");

    int test = 1;

    // Test 1
    if (ft_strncmp("Hello World", "HelloWorld", 6) == -55) // basic input (s1 < s2)
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 2
    if (ft_strncmp("HelloWorld", "Hello World", 6) == 55) // basic input (s1 > s2)
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 3
    if (strncmp("abcdef", "abcdefghijklmnop", 6) == ft_strncmp("abcdef", "abcdefghijklmnop", 6)) // str1 included in str2 -> 0
    	test_successful(test);
	else
		test_failed(test, value);
    test++;

    // Test 4
    if (strncmp("abcdef", "abcdefghijklmnop", 0) == ft_strncmp("abcdef", "abcdefghijklmnop", 0)) // len == 0
    	test_successful(test);
	else
		test_failed(test, value);
}
