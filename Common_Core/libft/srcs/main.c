/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoty <jtoty@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 11:58:41 by jtoty             #+#    #+#             */
/*   Updated: 2017/08/08 16:11:12 by jtoty            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"


int	main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";

	
	printf("%s",ft_strnstr(haystack, needle, 0));
}
