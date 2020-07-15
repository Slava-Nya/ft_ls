# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azomega <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/15 15:48:07 by azomega           #+#    #+#              #
#    Updated: 2020/07/15 17:10:59 by azomega          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

#find src -type f -name '*.c' | sed "s/\$/ \\\\/" | cut -c 3-

SRC = \
		src/flags/del_flags.c \
		src/flags/flags_error.c \
		src/flags/get_flag.c \
		src/flags/init_flags.c \
		src/flags/parse_flags.c \
		src/ls_strcmp.c \
		src/main.c \
		src/nodes/cmp_nodes.c \
		src/nodes/del_node.c \
		src/nodes/get_dir_node.c \
		src/nodes/get_file_node.c \
		src/nodes/get_node.c \
		src/parse_args.c \
		src/print/col/init_col_attr.c \
		src/print/col/print_src.c \
		src/print/col/print_srcs_col.c \
		src/print/col/walk_srcs_col.c \
		src/print/init_dir_path.c \
		src/print/line/get_human_readable.c \
		src/print/line/get_max_values.c \
		src/print/line/print_date.c \
		src/print/line/print_gid.c \
		src/print/line/print_link.c \
		src/print/line/print_mode.c \
		src/print/line/print_nlink.c \
		src/print/line/print_size.c \
		src/print/line/print_srcs_line.c \
		src/print/line/print_total.c \
		src/print/line/print_uid.c \
		src/print/print_col.c \
		src/print/print_col_right.c \
		src/print/print_dir_node.c \
		src/print/print_error.c \
		src/print/print_file_node.c \
		src/print/print_name.c \
		src/print/print_name_endl.c \
		src/print/print_node.c \
		src/print/print_srcs.c \
		src/print_args.c \
		src/srcs/cmp_srcs.c \
		src/srcs/del_src.c \
		src/srcs/get_srcs.c \
		src/srcs/init_src.c 

CC = gcc
INC = \
	  includes/flags.h \
	  includes/ls.h \
	  includes/nodes.h \
	  includes/print.h \
	  includes/print_col.h \
	  includes/print_line.h \
	  includes/srcs.h 

#CFLAGS = -I includes/ -I libft/includes/ -Wall -Werror -Wextra
CFLAGS = -I includes/ -I libft/includes/ 

OBJ = $(SRC:.c=.o)
DEBUG = #-g3 -fsanitize=address

all: $(NAME)
%.o: %.c $(INC)
	@printf "[ft_ls] Compiling [.:]\r"
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "[ft_ls] Compiling [:.]\r"
$(NAME): $(OBJ)
	@printf "[ft_ls] Compiled successfuly! [OK]\n"
	@make -C libft/
	@gcc $(CFLAGS) $(DEBUG) $(OBJ) libft/libft.a -o $(NAME)
clean:
	@make clean -C libft/
	@/bin/rm -f $(OBJ)
	@printf "[ft_ls] Removed object files!\n"
fclean: clean
	@/bin/rm -f $(NAME)
	@make fclean -C libft/
	@printf "[ft_ls] Removed ft_ls binary!\n"
re: fclean all

.PHONY: all clean fclean re
