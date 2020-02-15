/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:32:47 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 14:45:04 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ecrire l'integer n sur le file descriptor donne.
J'envisage l'exception avec ft_pustr_fd.
Si le nombre est negatif, j'ecris le - avec ft_putchar_fd.
S'il est plus grand que 9, je le divise par 10, de maniere recursive,
jusqu'a ce qu'il ne soit pas plus grand que 9.
*/

#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
  if (n == -2147483648)
    ft_putstr_fd("-2147483648", fd)
  else
  {
    if (n < 0)
    {
      ft_putchar_fd('-', fd);
      n = n * -1;
    }
    if (n >= 9)
      ft_putnbr_fd(n / 10);
    ft_putchar_fd((n % 10) + '0', fd);
}
