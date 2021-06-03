# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jthiago- <jthiago-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/02 17:46:38 by jthiago-          #+#    #+#              #
#    Updated: 2021/06/03 11:28:16 by jthiago-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC		= 	src/ft_atoi.c \
			src/ft_bzero.c \
			src/ft_calloc.c \
			src/ft_isalnum.c \
			src/ft_isalpha.c \
			src/ft_isascii.c \
			src/ft_isdigit.c \
			src/ft_isprint.c \
			src/ft_memccpy.c \
			src/ft_memchr.c \
			src/ft_memcmp.c \
			src/ft_memcpy.c \
			src/ft_memmove.c \
			src/ft_memset.c \
			src/ft_strchr.c \
			src/ft_strdup.c \
			src/ft_strlcat.c \
			src/ft_strlcpy.c \
			src/ft_strlen.c \
			src/ft_strncmp.c \
			src/ft_strnstr.c \
			src/ft_strrchr.c \
			src/ft_tolower.c \
			src/ft_toupper.c 

HEAD	=	libft.h

CFLAGS	=	-Wall -Werror -Wextra -c

CC		=	gcc

OBJ		=	${SRC:.c=.o}

.c.o:
			@$(CC) $(CFLAGS) $< -o ${<:.c=.o}


all:		$(NAME)

$(NAME):	${OBJ}
			@ar -rcs $(NAME) ${OBJ}
			@ranlib $(NAME)

