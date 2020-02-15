/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:32:55 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 14:34:45 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ecrit la chaine de caractere s sur le file descriptor donne.
Je fais appel a ft_putchar_fd pour pouvoir ecrire ma chaine de
caracteres caractere par caractere.
*/

#include "libft.h"
void ft_putstr(char const *s, int fd)
{
  int i;

  i = 0;
  while (s[i] != '\0')
  {
    ft_putchar_fd(s[i], fd);
    i++;
  }
}
