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
        src/main.c
        src/parse_flags/parse_flags.c
        src/parse_flags/init_flags.c
        includes/flags.h
        includes/nodes.h)

target_link_libraries(${PROJECT_NAME} ft)