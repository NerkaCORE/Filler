# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: unli-yaw <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/16 19:10:52 by unli-yaw          #+#    #+#              #
#    Updated: 2017/03/22 12:50:05 by unli-yaw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
SRC = 	ft_atoi.c ft_abs.c ft_itoa.c ft_swap.c ft_intlen.c \
		\
		ft_strlen.c ft_strncmp.c ft_strncpy.c ft_strcat.c ft_strlcat.c		  \
		ft_strclr.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c		  \
		ft_strnstr.c ft_strnew.c ft_strdel.c ft_strmap.c ft_strmapi.c		  \
		ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strnjoin.c		  \
		ft_strtrim.c ft_strrev.c ft_strsplit.c ft_strchar.c ft_strcmp.c		  \
		ft_strcpy.c ft_strdup.c	ft_striter.c ft_striteri.c					  \
		\
		ft_putchar.c ft_putstr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr.c	  \
		ft_putendl.c ft_putendl_fd.c ft_putnbr_fd.c							  \
		\
		ft_isspace.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c	  \
		ft_isprint.c ft_ishex.c ft_toupper.c ft_tolower.c ft_ispunct.c		  \
		ft_isblank.c														  \
		\
		ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c 		  \
		ft_memcmp.c ft_memalloc.c ft_memdel.c ft_memchr.c					  \
	 	\
	 	ft_lstnew.c ft_lstdel.c	ft_lstadd.c	ft_lstmap.c	ft_lstiter.c	  	  \
	 	ft_lstdelone.c ft_lstaddend.c ft_lstselectsort.c ft_lstsize.c		  \
	 	\
		get_next_line.c \
		\
		ft_bonus_color.c ft_itoamax.c ft_norm.c ft_parsing.c ft_printf.c	\
		ft_space.c ft_spec.c ft_spec_bonus.c ft_spec_l.c ft_spec_ld.c		\
		ft_specif_nb.c ft_specif_o.c ft_strjoin_free.c ft_strrevchr.c		\
		ldtoa.c get_type.c init.c tools.c fc_norm.c flag.c					\

OBJ = $(SRC:.c=.o)

$(NAME) :
	@$(CC) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\x1b[36m" [~Libft Compiled~] "\x1b[0m"

all : $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
