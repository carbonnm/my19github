# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarie <cmarie@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/07 14:37:19 by cmarie            #+#    #+#              #
#    Updated: 2020/02/07 16:35:13 by cmarie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy ft_memmove.c\
					ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c\
					ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c\
					ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
					ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c\
					ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
					ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c
					ft_putstr_fr.c ft_putendl_fd.c ft_putnbr_fd.c

CC			=	gcc

CFLAGS	=	-Wall -Wextra -Werror -c

RM			= rm -f

OBJS		= $(SRC:%.c=%.o)

all			:	$(NAME)

$(NAME)	:	$(OBJS)
					ar rc $(NAME) $(OBJS)

$(OBJS)	:	$(SRCS)
					$(CC) $(FLAGS) $(SRCS)

clean		:
					$(RM) $(OBJS)

fclean	:	clean
					$(RM) $(NAME)

re			:	fclean all
