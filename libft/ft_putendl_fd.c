/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 11:32:30 by cmarie            #+#    #+#             */
/*   Updated: 2020/02/15 14:38:58 by cmarie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Ecrire la chaine de caractere s sur le file descriptor donne, suivi d'un
retour a la ligne.
J'appelle ft_putstr_fd pour ecrire ma chaine de caracteres.
J'appelle ft_putchar_fd pour ecrire le \0 de fin.
*/

#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
  if (s)
  {
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n, fd');
  }
}
