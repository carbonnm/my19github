/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:29:18 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 12:55:49 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t size)
{
  size_t  count;
  size_t  i;

  count = 0;
  i = 0;
  while (src[count] != '\0')
    count++;
  while (src[i] != '\0' && i < (size - 1))
  {
    dst[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (count);
}
