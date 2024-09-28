NAME = push_swap

SRCS =		index/index_list.c \
			index/index_utils.c \
			movements/push.c \
			movements/reverse_rotate.c \
			movements/rotate.c \
			movements/swap.c \
			push_swap.c \
			stack/utils_2.c \
			stack/create_stack.c \
			stack/stack_utils.c \
			k-sort/k-sort.c \
			k-sort/simple_sort.c \

CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
RM = rm -rf
LIBFT = libft.a
LIBFT_PATH = libft/

OBJS = ${SRCS:.c=.o}

all: ${NAME} 

${NAME}: ${OBJS} ${LIBFT_PATH}${LIBFT}
	@${CC} ${CFLAGS} ${OBJS} ${LIBFT_PATH}${LIBFT} -o ${NAME}

${LIBFT_PATH}${LIBFT}:	
	@make bonus -C ${LIBFT_PATH} --silent

clean:
	@${RM} ${OBJS}
	@make fclean -C ${LIBFT_PATH}

fclean: clean
	@${RM} ${NAME} ${LIBFT_PATH}${LIBFT}

re: fclean all

.PHONY: all clean fclean re