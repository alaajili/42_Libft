# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaajili <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 11:28:28 by alaajili          #+#    #+#              #
#    Updated: 2021/11/09 09:38:36 by alaajili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalnum.c ft_isalpha.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcpy.c ft_strrchr.c \
ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_strlcat.c
BONUS =	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstlast.c ft_lstiter.c ft_lstnew.c \
ft_lstsize.c ft_lstmap.c
HEADER = libft.h
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)
GCC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)

bonus: $(BONUS_OBJS)

%.o: %.c
	$(GCC) $(CFLAGS) -c $<
	ar rcs $(NAME) $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re