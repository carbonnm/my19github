/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:28:38 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 17:21:55 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction copie n octets depuis la zone memoire de src vers
la zone memoire de dst.
Pour ce faire, je cree deux pointeurs, qui representeront dst et src.
J'egale donc ces deux pointeurs tant que i < n.
*/

#include "libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{
  unsigned char  *dest;
  unsigned char  *source:
  int   i;

  dest = (unsigned char *)dst;
  source = (unsigned char *)src;
  i = 0;
  if ((src == NULL) || (dst == NULL))
    return (NULL)
  while (i < n)
  {
    dest[i] = src[i];
    i++;
  }
  return (dst);
}
