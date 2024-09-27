NAME = push_swap

SRCS =	main.c \
	stack/create_stack.c \
	stack/stack_utils.c \
	stack/utils_2.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
LIBFT = libft.a
LIBFT_PATH = lib/

OBJS = ${SRCS:.c=.o}

all: ${NAME} 

${NAME}: ${OBJS} ${LIBFT_PATH}${LIBFT}
	@${CC} ${CFLAGS} ${OBJS} ${LIBFT_PATH}${LIBFT} -o ${NAME}

${LIBFT_PATH}${LIBFT}:	
	@make bonus -C ${LIBFT_PATH} --silent

clean:
	@${RM} ${OBJS}
	@make clean -C ${LIBFT_PATH}

fclean: clean
	@${RM} ${NAME} ${LIBFT_PATH}${LIBFT}

re: fclean all

.PHONY: all clean fclean re