/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:25:20 by lspohle           #+#    #+#             */
/*   Updated: 2023/01/06 19:51:22 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_strdup_test(int *value)
{
    test_headline("ft_strdup.c");

    int     test = 1;

	char    *copy;

    // Test 1
    copy = ft_strdup("Copy this"); // basic input -> "Copy this"
    if (strncmp(copy, "Copy this", strlen("Copy this")) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(copy);
    test++;

    // Test 2
    copy = ft_strdup(""); // empty string -> ""
    if (strncmp(copy, "", strlen("")) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(copy);
    test++;

    // Test 3
    copy = ft_strdup(""); // NULL parameter -> segmentation fault
    if (strncmp(copy, NULL, strlen(copy)) == 0)
    	test_successful(test);
	else
		test_failed(test, value);
    free(copy);
}
