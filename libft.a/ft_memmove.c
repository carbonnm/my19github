/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:28:47 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 12:55:01 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    while (i++ <= len)
      dest[len - i] = source[len - i]
  else
    while (len-- > 0)
      *(dest++) = *(source++);
  return (dst);
}
