/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:27:56 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 12:37:59 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
  char  *dest;
  const char  *source;
  int i;

  dest = dst;
  source = src;
  i = 0;
  while (i < n)
  {
    dst[i] = src[i];
    if (dst[i] == (char)c)
      return (dst + i + 1);
    i++;
  }
  return (NULL);
}
