# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kngwato <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/29 11:16:11 by kngwato           #+#    #+#              #
#    Updated: 2017/07/29 11:16:13 by kngwato          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS	= -Wall -Werror -Wextra -Iincludes -c
FILES		= $(shell ls | grep -E ".+\.c")
OBJ			= $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
	@gcc $(CFLAGS) $(FILES)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
