/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:59:41 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/02 19:35:24 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)

{
	if ((c >= 97 && c <= 122))
		return (c - 32);
	else
		return (c);
}
// int main()
// {
// 		printf("%c",ft_toupper('z'));
// }