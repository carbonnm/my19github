/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:28:47 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:38:14 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Cette fonction copie n octets depuis la zone memoire src vers la zone memoire
dst. Ces deux zones memoires peuvent se chevaucher, contrairement a memcpy.
La copie se passe comme si les octets de src etaient d'abord copies dans une
zone temporaire qui ne chevauche ni src ni dst et les octets sont ensuite
copies de la zone temporaire vers dst.
Je cree de nouveau mes deux pointeurs egaux a src et dst.
Je dois evaluer le cas ou source < dest et l'inverse.
Si la source est plus petite, il n'y a pas de problemes.
Sinon, on egale les pointeurs.
*/

#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
  size_t  i;
  char    *dest;
  char    *source;

  dest = dst;
  source = src;
  i = 0;
  if (source < dest)
    while (i <= len)
    {
      dest[i] = source[i];
      i++;
    }
  else
    while (len-- > 0)
      *(dest++) = *(source++);
  return (dst);
}
