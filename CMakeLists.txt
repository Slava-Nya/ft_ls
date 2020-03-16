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
        includes/nodes.h
        src/nodes/cmp_nodes.c
        src/nodes/get_node.c
        src/nodes/get_error_node.c
        includes/srcs.h
        src/nodes/cmp_srcs.c
        src/nodes/get_srcs.c
        includes/ls.h
        src/main.c
        src/parse_args.c
        )

target_link_libraries(${PROJECT_NAME} ft)