NAME = libft.a

SOURCES =		ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c \

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror
REMOVE = rm -f
CC = cc

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	$(REMOVE) $(OBJECTS)
fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re