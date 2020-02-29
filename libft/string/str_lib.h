#ifndef STR_LIB_H
# define STR_LIB_H
# include <stdlib.h>

size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *src);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_nstrjoin(int n, ...);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char *charset);
int			ft_strvector(char **vector, char data);

char		*ft_itoa(ssize_t n);
char		*ft_itoabase(size_t n, size_t base, char reg);

ssize_t		ft_putstr(char const *s);
void		ft_putendl(char const *s);

ssize_t		ft_putstr_fd(char const *c, int fd);
void		ft_putendl_fd(char const *s, int fd);

#endif
