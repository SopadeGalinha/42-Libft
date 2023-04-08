# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 01:54:21 by jhogonca          #+#    #+#              #
#    Updated: 2023/04/08 01:54:21 by jhogonca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME	= libft.a

SRCS	= ${wildcard src/*.c}
	      
BONUS	= ${wildcard src/bonus/*.c}

SRCS_O	= ${SRCS:.c=.o}
BONUS_O	= ${BONUS:.c=.o}
OBJS	= ${SRCS_O} ${BONUS_O}

CC		= gcc
RM		= /bin/rm -f
CFLAGS	= -Wall -Wextra -Werror -Iincludes/*.h

CL = ar -rc
RL = ar -s

${NAME}: ${SRCS_O}
	${CL} ${NAME} ${SRCS_O}
	${RL} ${NAME}
	echo 'Mandatory part is ready'

all: ${NAME}

bonus:	${BONUS_O}
		${CL} ${NAME} ${BONUS_O}
		${RL} ${NAME}
		echo 'Bonus part is ready'

clean:
	${RM} ${OBJS}
	echo 'All created objects were removed'

fclean: clean
	${RM} ${NAME}
	echo 'Static library removed'

re: fclean all

norm:
	echo 'Running Norminette'
	norminette -R CheckForbiddenSourceHeader src/*.c
	norminette -R CheckForbiddenSourceHeader src/bonus/*.c
	norminette -R CheckDefine ./includes/*.h

.PHONY: clean fclean all bonus re norm
