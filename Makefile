# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 17:46:38 by jthiago-          #+#    #+#              #
#    Updated: 2021/06/11 17:23:23 by jthiago-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_putendl_fd.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strmapi.c \
			ft_split.c \
			ft_itoa.c \
			ft_strtrim.c

HEAD	=	libft.h

CFLAGS	=	-Wall -Werror -Wextra -c

CC		=	clang

OBJ		=	${SRC:.c=.o}

.c.o:
			@$(CC) $(CFLAGS) $< -o ${<:.c=.o}

so:
	$(CC) -fPIC $(CFLAGS) $(SRC)
	gcc -shared -o libft.so $(OBJ)

all:	$(NAME)

$(NAME):	${OBJ}
			@ar -rcs $(NAME) ${OBJ}
			@ranlib $(NAME)

clean:
			@rm -f $(OBJ)

fclean:	cleam
			@rm -f $(NAME)