/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:28:20 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 12:38:03 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
  char  *str;
  int i;

  str = s;
  i = 0;
  while (i < n)
  {
    if (str[i] == (char)c)
      return (str[i])
    i++;
  }
  return (NULL);
}
