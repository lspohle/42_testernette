/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:34 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:48:33 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static char	ft_to_uppercase(unsigned int i, char c)
{
    i++;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

void	ft_strmapi_test(int *value)
{
    test_headline("ft_strmapi.c");

    int         test = 1;

	const char  *input1 = "Hello World";
    const char  *output_check1 = "HELLO WORLD";
    const char  *input2 = "\t\n42 Wolfsburg\r";
    const char  *output_check2 = "\t\n42 WOLFSBURG\r";
    const char  *input3 = "\t\n\0\r";
    const char  *output_check3 = "\t\n";
	char        *output_test;

    // Test 1
    output_test = ft_strmapi(input1, ft_to_uppercase);
    if (strncmp(output_test, output_check1, strlen(output_check1)) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(output_test);
    test++;

    // Test 2
    output_test = ft_strmapi(input2, ft_to_uppercase);
    if (strncmp(output_test, output_check2, strlen(output_check2)) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(output_test);
    test++;

    // Test 3
    output_test = ft_strmapi(input3, ft_to_uppercase);
    if (strncmp(output_test, output_check3, strlen(output_check3)) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(output_test);
}
