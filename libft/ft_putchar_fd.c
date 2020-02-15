/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:32:13 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 17:27:55 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ecrit le caractere c sur le file descriptor donne.
Fonction write autorisee.
*/

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
  write(fd, &c, 1);
}
