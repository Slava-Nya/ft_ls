#ifndef CHAR_LIB_H
# define CHAR_LIB_H

int					ft_isspace(char c);
int					ft_iswspace(char c);
int					ft_isalpha(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);

void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);

int					ft_toupper(int c);
int					ft_tolower(int c);

#endif
