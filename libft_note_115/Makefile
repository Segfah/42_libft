# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 04:45:03 by corozco           #+#    #+#              #
#    Updated: 2019/10/19 02:23:40 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD := -I .

CFLAGS = -Wall -Wextra -Werror

BNS := \
	ft_lstmap_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstnew_bonus.c \

SRC := \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strlen.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_memalloc.c \
	ft_strncat.c \
	ft_isupper.c \
	ft_islower.c \
	ft_free_split.c \
	ft_isspace.c

OBJS :=$(SRC:.c=.o)
OBJB :=$(BNS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJB)
	ar rcs $(NAME) $(OBJS) $(OBJB)

%.o: %.c
	gcc $(CFLAGS) $(HEAD) -c $< -o $@

clean:
	rm -rf $(OBJS) $(OBJB)

fclean:
	rm -rf $(NAME) $(OBJS) $(OBJB)

re: fclean all
