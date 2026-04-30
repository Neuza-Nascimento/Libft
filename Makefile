# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nedo-nas <nedo-nas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/22 11:36:03 by nedo-nas          #+#    #+#              #
#    Updated: 2026/04/29 17:51:52 by nedo-nas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SOURCES = ft_strlen.c ft_strlcat.c ft_strlcpy.c ft_itoa.c ft_strdup.c ft_strchr.c\
			ft_strrchr.c ft_strchr.c ft_split.c ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_substr.c ft_strnstr.c\
			ft_tolower.c ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isascii.c ft_atoi.c\
			ft_memcmp.c	ft_strncmp.c ft_putnbr_fd.c ft_bzero.c ft_putstr_fd.c ft_putchar_fd.c \
			ft_putendl_fd.c ft_calloc.c ft_memchr.c	ft_memcpy.c	ft_memmove.c ft_striteri.c ft_toupper.c\
			ft_memset.c\

OBJ = $(SOURCES:.c=.o)

all: $(NAME)

bonus: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%o: %c 
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	
re:
	fclean all
	
.PHONY: all clean fclean re bonus
