# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpacheco <jpacheco@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 16:05:43 by jpacheco          #+#    #+#              #
#    Updated: 2023/04/29 16:05:44 by jpacheco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

SRCS = ft_strtrim.c 

OBJS := ${SRCS:.c=.o}

CC:=cc
CFLAGS := -Wall -Wextra -Werror

RM := /bin/rm -rf
CL := ar -rc
RL := ar -s


${NAME}: ${OBJS}
	${CL} ${NAME} ${OBJS}
	${RL} ${NAME}
	echo 'hello'

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

