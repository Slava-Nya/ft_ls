cmake_minimum_required(VERSION 3.15)
project(libft C)

set(CMAKE_C_STANDARD 11)

include_directories(char env file list math memory num regex string vector)

add_executable(libft
        num/ft_atoi.c
        memory/ft_bzero.c
        env/ft_get_env_field.c
        env/ft_get_env_fval.c
        char/ft_isalnum.c
        char/ft_isalpha.c
        char/ft_isascii.c
        char/ft_isdigit.c
        char/ft_islower.c
        char/ft_isprint.c
        char/ft_isspace.c
        char/ft_isupper.c
        char/ft_iswspace.c
        string/ft_itoa.c
        string/ft_itoabase.c
        list/ft_lstadd.c
        list/ft_lstaddsort.c
        list/ft_lstcircle.c
        list/ft_lstdel.c
        list/ft_lstdelcircle.c
        list/ft_lstdelone.c
        list/ft_lstiter.c
        list/ft_lstmap.c
        list/ft_lstnew.c
        memory/ft_memalloc.c
        memory/ft_memccpy.c
        memory/ft_memchr.c
        memory/ft_memcmp.c
        memory/ft_memcpy.c
        memory/ft_memdel.c
        memory/ft_memmove.c
        memory/ft_memset.c
        string/ft_nstrjoin.c
        math/ft_pow.c
        char/ft_putchar.c
        char/ft_putchar_fd.c
        string/ft_putendl.c
        string/ft_putendl_fd.c
        num/ft_putnbr.c
        num/ft_putnbr_fd.c
        string/ft_putstr.c
        string/ft_putstr_fd.c
        string/ft_strcat.c
        string/ft_strchr.c
        string/ft_strclr.c
        string/ft_strcmp.c
        string/ft_strcpy.c
        string/ft_strdel.c
        string/ft_strdup.c
        string/ft_strequ.c
        string/ft_striter.c
        string/ft_striteri.c
        string/ft_strjoin.c
        string/ft_strlcat.c
        string/ft_strlen.c
        string/ft_strmap.c
        string/ft_strmapi.c
        string/ft_strncat.c
        string/ft_strncmp.c
        string/ft_strncpy.c
        string/ft_strnequ.c
        string/ft_strnew.c
        string/ft_strnstr.c
        string/ft_strrchr.c
        string/ft_strsplit.c
        string/ft_strstr.c
        string/ft_strsub.c
        string/ft_strtrim.c
        char/ft_tolower.c
        char/ft_toupper.c
        vector/ft_vector_del.c
        vector/ft_vector_init.c
        vector/ft_vector_push.c
        vector/ft_vector_remove.c
        file/get_next_line.c
        regex/match.c
        regex/nmatch.c char/char_lib.h memory/mem_lib.h string/str_lib.h math/ft_min.c math/ft_max.c math/math_lib.h num/num_lib.h regex/regex_lib.h file/file_lib.h list/list_lib.h env/env_lib.h vector/vec_lib.h memory/ft_xmalloc.c)
