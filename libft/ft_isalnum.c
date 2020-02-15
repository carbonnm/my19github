/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:26:47 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:48:56 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifie si le caractere est alphanumerique.
*/

#include "libft.h"
int ft_isalnum(int c)
{
  if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    return (1);
  return (0);
}