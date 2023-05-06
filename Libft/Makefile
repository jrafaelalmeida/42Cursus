# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 16:05:43 by jpacheco          #+#    #+#              #
#    Updated: 2023/05/06 16:29:40 by jpacheco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCS = ft_strtrim.c     ft_atoi.c         ft_isprint.c    ft_strlen.c\
		ft_strchr.c      ft_strrchr.c      ft_strncmp.c    ft_strnstr.c\
		ft_isalpha.c     ft_isdigit.c      ft_isalnum.c    ft_isascii.c\
		ft_strlcpy.c     ft_strlcat.c      ft_toupper.c    ft_tolower.c\
		ft_bzero.c       ft_memcpy.c       ft_memmove.c\
		ft_putendl_fd.c  ft_putnbr_fd.c    ft_putchar_fd.c ft_putstr_fd.c\
		ft_itoa.c        ft_split.c        ft_strjoin.c     ft_substr.c\
		ft_strmapi.c     ft_striteri.c     ft_calloc.c      ft_strdup.c\
		ft_memchr.c      ft_memcmp.c       ft_memset.c\

OBJS := ${SRCS:.c=.o}

BonusSRCS = ft_lstnew.c      ft_lstlast.c      ft_lstiter.c\
		ft_lstsize.c     ft_lstdelone.c    ft_lstclear.c\
		ft_lstadd_back.c ft_lstadd_front.c ft_lstmap.c \

BonusOBJS := ${BonusSRCS: .c=.o}

CC:=cc
CFLAGS := -Wall -Wextra -Werror

RM := /bin/rm -rf
CL := ar -rc
RL := ar -s


${NAME}: ${OBJS} ${BonusOBJS}
	${CL} ${NAME} ${OBJS}
	${RL} ${NAME}
	echo 'libft done'

all: ${NAME}

bonus: ${OBJS} ${BonusOBJS}
	${CL} ${NAME} ${OBJS} ${BonusOBJS}
	${RL} ${NAME}

clean:
	${RM} ${OBJS} ${BonusOBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all bonus clean fclean re