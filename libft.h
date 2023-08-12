/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhogonca <jhogonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 02:19:58 by jhogonca          #+#    #+#             */
/*   Updated: 2023/04/07 02:19:58 by jhogonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE   10000
# endif

/*________________________________HEADERS__________________________________*/

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>

/*_______________________________FUNCTIONS__________________________________*/

//MANDATORY PART I

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

// ----------------------------- PART I INT ------------------------------- //

int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

// ----------------------------- PART I CHAR ------------------------------ //

char	*ft_strdup(const char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

// ----------------------------- PART I VOID ------------------------------ //

void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t numb, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void*src, size_t n);

// ----------------------------- PART I SIZE_T ---------------------------- //

size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/*__________________________________________________________________________*/

//MANDATORY PART II

// ------------------------------ CHAR ------------------------------------ //

char	*ft_itoa(int n);
char	*ft_strdup(const char *src);
char	**ft_split(char const *s, char delim);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

// ------------------------------- VOID ----------------------------------- //

void	ft_putnbr_fd(int nb, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*_________________________________________________________________________*/

// STRUCTURES

// --------------------------- LIBFT BONUS ------------------------------- //
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// -------------------------------- GNL ---------------------------------- //
typedef struct s_line
{
	char	*line;
	long	size_line;
	long	index;
	long	size_buffer;
}	t_line;

// -------------------------------- PRINTF ------------------------------- //
typedef struct s_data
{
	int				count;
	int				index;
	long			pointer;
	unsigned int	hex_ref;
	char			*str;
}	t_data;

// ------------------------------- VOID ---------------------------------- //

int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	ft_lstadd_front(t_list **head, t_list *new);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

// ------------------------------- VOID ---------------------------------- //

void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstadd_back(t_list **lst, t_list *new);

/*_________________________________________________________________________*/

//EXTRAS

char	*get_next_line(int fd);
int		ft_printf(const char *fmt, ...);
int		ft_atoi_base(const char *str, int base);

/*_________________________________________________________________________*/

#endif
