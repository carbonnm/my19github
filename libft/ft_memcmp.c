/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:28:30 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:45:00 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction sert a comparer des zones memoires.
La fonction memcmp() compare les n premiers octets des zones mémoire s1 et s2.
Elle renvoie un entier inférieur, égal, ou supérieur à zéro,
si s1 est respectivement inférieure, égale ou supérieur à s2.
Je cree a nouveau deux pointeurs correspondant a mes zones de memoire.
Ce sont elles que je vais pouvoir comparer, et retourner ce qui convient.
*/

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  char  str1;
  char  str2;
  int i;

  str1 = s1;
  str2 = s2;
  i = 0;
  while (i < n)
  {
    if (str1[i] < str2[i])
      return (-1);
    if (str1[i] > str2[i])
      return (1);
    i++;
  }
  return (0);
}
