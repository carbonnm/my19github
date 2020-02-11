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

  i = 0;
  j = 0;
  while (haystack[i] != '\0' && needle[j] != '\0')
  {
    while (haystack[len] > 0)
    {
      if (haystack[i] != needle[j])
        i++;
      len--;
    }
  }
}
