# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jomatic <jomatic@student.42vienna.com      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/22 14:46:16 by jomatic           #+#    #+#              #
#    Updated: 2026/05/19 14:46:39 by jomatic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a

SRCS =	ft_atoi.c	\
		ft_bzero.c	\
		ft_calloc.c	\
		ft_isalnum.c	\
		ft_isalpha.c	\
		ft_isascii.c	\
		ft_isdigit.c	\
		ft_isprint.c	\
		ft_itoa.c	\
		ft_lstadd_back.c	\
		ft_lstadd_front.c	\
		ft_lstclear.c	\
		ft_lstdelone.c	\
		ft_lstiteri.c	\
		ft_lstlast.c	\
		ft_lstmap.c	\
		ft_lstnew.c	\
		ft_lstsize.c	\
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_memcpy.c	\
		ft_memmove.c	\
		ft_memset.c	\
		ft_putchar_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_putstr_fd.c	\
		ft_split.c	\
		ft_strchr.c	\
		ft_strdup.c	\
		ft_striteri.c	\
		ft_strjoin.c	\
		ft_strlcat.c	\
		ft_strlcpy.c	\
		ft_strlen.c	\
		ft_strmapi.c	\
		ft_strncmp.c	\
		ft_strnstr.c	\
		ft_strrchr.c	\
		ft_strtrim.c	\
		ft_substr.c	\
		ft_tolower.c	\
		ft_toupper.c

OBJS = $(SRCS:.c=.o)

HEADER = libft.h
DEPS = $(SRCS:.c=.d)
CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD -MP

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

-include	$(DEPS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all
