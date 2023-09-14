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
		
SRCS := ft_strtrim.c ft_atoi.c ft_isprint.c ft_strlen.c\
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c\
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
		ft_bzero.c ft_memcpy.c ft_memmove.c\
		ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_itoa.c ft_split.c ft_strjoin.c ft_substr.c\
		ft_strmapi.c ft_striteri.c ft_calloc.c ft_strdup.c\
		ft_memchr.c ft_memcmp.c ft_memset.c\
		ft_lstnew.c ft_lstmap.c ft_lstlast.c ft_lstiter.c\
		ft_lstsize.c ft_lstclear.c ft_lstdelone.c\
		ft_lstadd_back.c ft_lstadd_front.c ft_atoi_base.c\
		get_next_line.c ft_printf.c ft_printf_fd.c ft_isspace.c\
		ft_free_array.c ft_contains.c

OBJS := ${SRCS:.c=.o}

CC := cc
RM := /bin/rm -f
CFLAGS := -Wall -Wextra -Werror -I.

CL := ar -rc
RL := ranlib

${NAME}: ${OBJS}
	${CL} ${NAME} ${OBJS}
	${RL} ${NAME}

all: ${NAME}
	echo 'libft compiled'

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

norm:
	printf '\033[32mRunning norminette..\n\033[0m'
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h
	printf '\033[32mNorminette libft[ ✔ ]\n\033[0m'

git: fclean
	git add .
	git commit -m "new functions added"
	git push

author: 
	echo 'jhogonca'

.PHONY: clean fclean norm all re author
