# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: corozco <corozco@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/24 05:41:03 by corozco           #+#    #+#              #
#    Updated: 2019/10/24 05:41:56 by corozco          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEAD := -I .

#Si esta en una carpeta
#HEAD := -I includes/

#flags requeridos en 42
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

#color
COM_COLOR   = \033[0;34m
OBJ_COLOR   = \033[0;36m
OK_COLOR    = \033[0;32m
ERROR_COLOR = \033[0;31m
WARN_COLOR  = \033[0;33m
NO_COLOR    = \033[m

OK_STRING    = "[OK]"
ERROR_STRING = "[ERROR]"
WARN_STRING  = "[WARNING]"
COM_STRING   = "Compiling"

define run_and_test
printf "%b" "$(COM_COLOR)$(COM_STRING) $(OBJ_COLOR)$(@F)$(NO_COLOR)\r"; \
$(1) 2> $@.log; \
RESULT=$$?; \
if [ $$RESULT -ne 0 ]; then \
  printf "%-60b%b" "$(COM_COLOR)$(COM_STRING)$(OBJ_COLOR) $@" "$(ERROR_COLOR)$(ERROR_STRING)$(NO_COLOR)\n"   ; \
elif [ -s $@.log ]; then \
  printf "%-60b%b" "$(COM_COLOR)$(COM_STRING)$(OBJ_COLOR) $@" "$(WARN_COLOR)$(WARN_STRING)$(NO_COLOR)\n"   ; \
else  \
  printf "%-60b%b" "$(COM_COLOR)$(COM_STRING)$(OBJ_COLOR) $(@F)" "$(OK_COLOR)$(OK_STRING)$(NO_COLOR)\n"   ; \
fi; \
cat $@.log; \
rm -f $@.log; \
exit $$RESULT
endef



all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@printf "%b" "$(WARN_COLOR)\t $(NAME)\t$(OK_COLOR)[CREATED]$(NO_COLOR)\n";

bonus: $(OBJS) $(OBJB)
	@ar rcs $(NAME) $(OBJS) $(OBJB)
	@printf "%b" "$(WARN_COLOR)\t $(NAME)\t$(OK_COLOR)[UPDATED]$(NO_COLOR)\n";

%.o: %.c
	@$(call run_and_test,gcc $(CFLAGS) $(HEAD) -c $< -o $@)

clean:
	@rm -rf $(OBJS) $(OBJB)
	@printf "%b" "$(ERROR_COLOR)\tmake clean\t$(OK_COLOR)[SUCCESS]$(NO_COLOR)\n";

fclean:
	@rm -rf $(NAME) $(OBJS) $(OBJB)
	@printf "%b" "$(ERROR_COLOR)\tmake fclean\t$(OK_COLOR)[SUCCESS]$(NO_COLOR)\n";

re: fclean all

# copilar testos
test:
	gcc $(CFLAGS )main.c -I. -L. -lft
#	gcc $(CFLAGS )main.c -I includes -L. -lft
	./a.out
	@rm a.out
