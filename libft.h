/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyildiz <beyildiz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 14:42:50 by beyildiz          #+#    #+#             */
/*   Updated: 2023/12/26 17:14:07 by beyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <string.h>

typedef struct		s_list
{
	void 			*content;
	struct s_list 	*next;
} 					t_list;

int		ft_isalpha(char y);
int		ft_isalnum(char y);
int		ft_isascii(char y);
int		ft_isdigit(char y);
int		ft_isprint(char y);
int		ft_lstsize(t_list *lst);
int		ft_toupper(int y);
int		ft_tolower(int y);
int		ft_strncmp(char *str1, char *str2, size_t n);
size_t  ft_strlcat(const char *src, char *dest, size_t s);
size_t	ft_strlen(const char *by);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
char	*ft_itoa(int n);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *by, int c);
char	*ft_strrchr(const char *by, int c);
char	*ft_strlcpy(const char *src, char *dest);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strnstr(const char *s1, const char *s2, size_t s);
char    *ft_substr(char const *by, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void    *ft_memmove(void *dest, const void *src, size_t s);
void    *ft_memcpy(void *dest, const void *src, size_t s);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	*ft_memset(void *by, int v, size_t s);
void	*ft_calloc(size_t n, size_t s);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	*ft_bzero(void *by, size_t s);
void	ft_putnbr_fd(int n, int fd);

#endif