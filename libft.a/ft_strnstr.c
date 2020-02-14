/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:30:46 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/07 13:02:01 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  int i;
  int j;

  i = 1;
  j = 0;
  if(!*needle)
    return ((char*)str);
  while (haystack[j] != '\0' && (size_t)j < len)
  {
    if (haystack[j] == needle[0])
    {
      while (needle[i] != '\0' && haystack[j + 1] == needle[i] &&
      (size_t)(j + i) < len)
        i++;
      if (needle[i] == '\0')
        return ((char*)&str[j]);
    }
    j++;
  }
  return (0);
}
