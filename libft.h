#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t len);
void	*ft_calloc(size_t number, size_t size);
void	*ft_memset(void *str, int c, size_t len);
void	*ft_memcpy(void *dest, void *src, size_t len);
void	*ft_memccpy(void *dest, void *src, int c, size_t len);
void	*ft_memmove(void *dest, void *src, size_t len);
void	*ft_memchr(void *str, int c, size_t len);

int		ft_memcmp(void *str1, void *str2, size_t n);
int		ft_atoi(const char *str);
int		ft_strncmp(const char *str1, const char *str2, size_t len);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int n);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size);
size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t size);
size_t	ft_strlen(const char *src);

char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strdup(const char *str);

#endif