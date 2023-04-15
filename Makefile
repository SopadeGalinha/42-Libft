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

NAME	:= libft.a
		
SRCS =	ft_strtrim.c     ft_atoi.c         ft_isprint.c    ft_strlen.c\
		ft_strchr.c      ft_strrchr.c      ft_strncmp.c    ft_strnstr.c\
		ft_isalpha.c     ft_isdigit.c      ft_isalnum.c    ft_isascii.c\
		ft_strlcpy.c     ft_strlcat.c      ft_toupper.c    ft_tolower.c\
		ft_bzero.c       ft_memcpy.c       ft_memmove.c\
		ft_putendl_fd.c  ft_putnbr_fd.c    ft_putchar_fd.c ft_putstr_fd.c\
		ft_itoa.c        ft_split.c        ft_strjoin.c     ft_substr.c\
		ft_strmapi.c     ft_striteri.c     ft_calloc.c      ft_strdup.c\
		ft_memchr.c      ft_memcmp.c       ft_memset.c

BONUS = ft_lstnew.c      ft_lstmap.c       ft_lstlast.c     ft_lstiter.c\
		ft_lstsize.c     ft_lstclear.c     ft_lstdelone.c\
		ft_lstadd_back.c ft_lstadd_front.c

SRCS_O	:= ${SRCS:.c=.o}
BONUS_O	:= ${BONUS:.c=.o}
OBJS	:= ${SRCS_O} ${BONUS_O}

CC		:= gcc
RM		:= /bin/rm -f
CFLAGS	:= -Wall -Wextra -Werror -I*.h

CL := ar -rc
RL := ar -s

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

author: 
	echo 'jhogonca'

norm:
	echo 'Running Norminette'
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: clean fclean norm all bonus re author
