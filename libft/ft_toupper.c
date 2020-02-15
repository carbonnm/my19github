/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 12:31:12 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 12:52:34 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Verifie si un caractere qui peut etre converti en majuscule.
*/

#include "libft.h"
int ft_toupper(int c)
{
  if (( c >= 97) && (c <= 122))
    return (c - 32);
  return (c);
}
