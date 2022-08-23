#VARIABLES
SRC		=	./src/ft_printf.c ./src/printpointer_fd.c ./src/utils.c ./src/handlechar.c \
			./src/handlestr.c ./src/handlepointer.c ./src/handleints.c ./src/handleunsigned.c\
			./src/handlehex.c
OBJ		=	$(SRC:.c=.o)

LIBFT		= libft.a
SUBDIRS	= ./libft

CFLAGS	= -Wall -Wextra -Werror -I. -g
FLAGS	= -Wall -Wextra -Werror

NAME	= libftprintf.a

#FUNCTIONS
all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	mv $(SUBDIRS)/$(LIBFT) $(NAME)
	ar -rcs $@ $^

$(LIBFT):
	$(MAKE) bonus -C $(SUBDIRS)

clean:
	rm -rf $(NAME)

fclean: clean
	cd libft && rm -rf *.o
	cd ..
	cd src && rm -rf *.o
	cd ..

re: fclean all

.PHONY: all clean fclean