/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:28:38 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 12:54:50 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy(void *dst, const void *src, size_t n)
{
  char  *dest;
  const char  *source:
  int   i;

  dest = dst;
  source = src;
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
