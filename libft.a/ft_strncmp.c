/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:29:28 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 13:01:50 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction sert a comparer deux chaines de caracteres.
Elle compare les n premiers caracteres de s1 et s2.
Elle renvoie un entier superieur, inferieur ou egal a zero
en fonction de la comparaison de s1 et s2.
*/

#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int i;

  i = 0;
  while (i < n)
  {
    if (s1 < s2)
      return (-1);
    if (s1 > s2)
      return (1);
    i++;
  }
  return (0);
}
