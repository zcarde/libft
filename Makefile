# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zcarde <zcarde@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/08 18:23:26 by zcarde            #+#    #+#              #
#    Updated: 2015/09/18 01:10:10 by zcarde           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
ft_isprint.c ft_itoa.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c \
ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c \
ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c \
ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c \
ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c \
ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c ft_lstadd.c \
ft_lstdel.c ft_lstdelone.c ft_lsten.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
ft_isblank.c ft_isspace.c ft_putstrtab.c ft_swapchar.c ft_swapint.c \
get_next_line.c ft_isnegative.c ft_strsplit_fn.c ft_strjoinf.c ft_latoi.c\
ft_datoi.c ft_fatoi.c ft_is_str_number.c ft_mstrjoin.c ft_strappend.c\
ft_strtablen.c ft_strreplace.c

OBJ = $(SRC:.c=.o)

INCLUDES = includes/

NAME = libft.a 

all: $(NAME)

$(NAME): $(OBJ)
	
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc -Werror -Wextra -Wall  -I $(INCLUDES) -c $^
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
