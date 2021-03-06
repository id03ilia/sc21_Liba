# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dflorenc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/19 14:04:19 by dflorenc          #+#    #+#              #
#    Updated: 2021/04/19 14:04:28 by dflorenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_strlen.c ft_strncmp.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_split.c ft_itoa.c 
LIST_B	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS	= ${patsubst %.c,%.o,$(SRCS)}
OBJS_B	= ${patsubst %.c,%.o,$(LIST_B)}

HEADER	= libft.h

NAME 	= libft.a

RM		= rm -f
GCCFLAG	= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	${OBJS} ${HEADER}
			ar rcs ${NAME} $?

%.o	:	%.c	
			gcc ${GCCFLAG} -c $< -o $@

bonus :
			@make OBJS="$(OBJS_B)" all

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus
