/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fishaq <fishaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:56:37 by fishaq            #+#    #+#             */
/*   Updated: 2023/08/06 13:41:47 by fishaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)

{
	if ((c >= 65 && c <= 90))
		return (c + 32);
	else
		return (c);
}
// int main()
// {
//     printf("%c",ft_tolower('A'));
// }