#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <string.h>

//fonksiyon prototipleri
int ft_isalpha(char y);
int ft_isalnum(char y);
int ft_isascii(char y);
int ft_isdigit(char y);
int ft_isprint(char y);
size_t ft_strlen(const char *by);
void    *ft_memset(void *by, int v, size_t s);
void    *ft_bzero(void *by, size_t s);
char    *ft_strlcpy(const char *src, char *dest);
char	*ft_strrchr(const char *by, int c);
char	*ft_strchr(const char *by, int c);
int ft_toupper(int y);
int	ft_tolower(int y);
void    *ft_bzero(void *by, size_t s);
void    *ft_memcpy(void *dest, const void *src, size_t s);
void    *ft_memmove(void *dest, const void *src, size_t s);
int     ft_strncmp(const char *s1, const char *s2, size_t s);
void    *ft_memchr(const void *by, int c, size_t s);
int	ft_memcmp(const void *s1, const void *s2, size_t s);
char	*ft_strnstr(const char *s1, const char *s2, size_t s);
int	ft_atoi(const char *by);
void	*ft_calloc(size_t n, size_t s);
char	*ft_strdup(const char *str);


#endif