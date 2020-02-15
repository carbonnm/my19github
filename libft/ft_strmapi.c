/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:33:39 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 14:31:32 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applique la fonction f à chaque caractère de la chaine de caractères
passée en argument pour créer une nouvelle chaine de caractères
résultant des applications successives de f.
*/

#include "libft.h"
char  *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char  *ptr;
  int   index;

  index = 0;
  if (!s || !f)
    return (NULL);
  if (!(ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
    return (NULL);
  while (s[index])
  {
    ptr[index] = f(index, s[index]);
    index++;
  }
  ptr[index] = '\0';
  return (ptr);
}
