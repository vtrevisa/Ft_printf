#VARIABLES
LIB		= libft.a
EXEC	= a.out
SRC		= ft_printf.c 
MAIN	= ft_printf_main.c
OBJ		=	$(SRC:.c=.o)
NAME		= libfprintft.a
CFLAGS	= -Wall -Wextra -Werror
SUBDIRS	= libft

#FUNCTIONS
all:	$(EXEC)
	./$(EXEC)

$(EXEC): $(NAME) $(LIB)
	gcc $(CFLAGS) $(MAIN) $(LIB) $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(LIB):
	$(MAKE) bonus -C $(SUBDIRS)
	cd libft && mv libft.a ./..
	cd ..

.PHONY: subdirs $(SUBDIRS)