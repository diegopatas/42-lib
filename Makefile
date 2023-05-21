# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/15 23:21:37 by ddiniz            #+#    #+#              #
#    Updated: 2022/04/29 17:44:40 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

SRC	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	  ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	  ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	  ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	  ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
	  ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
	
SRC	+= ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	   ft_lstiter.c ft_lstlast.c ft_lstnew.c ft_lstsize.c

SRC	+= ft_printf.c ft_itoag.c print_char.c print_str.c print_nbr.c \
	   print_hex.c print_ptr.c print_base.c

SRC	+= line_getnext.c ft_strlcpygnl.c

OBJ	= $(SRC:%.c=%.o)
NAME	= libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $^

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re

clean:
	rm -rf $(OBJ) $(B_OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all