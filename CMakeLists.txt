cmake_minimum_required(VERSION 3.15)
project(clion_ls C)

set(CMAKE_C_STANDARD 11)

set(LIBFT_DIR libft)
include_directories(
        ${LIBFT_DIR}/char
        ${LIBFT_DIR}/env
        ${LIBFT_DIR}/file
        ${LIBFT_DIR}/list
        ${LIBFT_DIR}/math
        ${LIBFT_DIR}/memory
        ${LIBFT_DIR}/num
        ${LIBFT_DIR}/regex
        ${LIBFT_DIR}/search
        ${LIBFT_DIR}/string
        ${LIBFT_DIR}/vector
        ${LIBFT_DIR})
add_subdirectory(${LIBFT_DIR})

include_directories(includes)
add_executable(clion_ls
        includes/flags.h
        src/flags/parse_flags.c
        src/flags/init_flags.c
        src/flags/del_flags.c
        includes/nodes.h
        src/nodes/cmp_nodes.c
        src/nodes/get_node.c
        src/nodes/get_file_node.c
        src/nodes/get_dir_node.c
        src/nodes/del_node.c
        includes/srcs.h
        src/srcs/cmp_srcs.c
        src/srcs/get_srcs.c
        src/srcs/init_src.c
        src/srcs/del_src.c
        includes/ls.h
        src/main.c
        src/parse_args.c
        src/print_args.c
        includes/print.h
        src/print/print_node.c
        src/print/print_dir_node.c
        src/print/print_file_node.c
        src/print/print_error.c
        src/print/print_srcs.c
        src/print/col/print_srcs_col.c
        src/print/col/print_srcs_row.c
        src/flags/get_flag.c
        src/print/line/print_srcs_line.c
        includes/print_col.h
        includes/print_line.h
        src/print/line/print_mode.c)

target_link_libraries(${PROJECT_NAME} ft)
