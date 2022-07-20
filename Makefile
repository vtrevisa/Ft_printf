#VARIABLES
SRC		= ft_printf.c printpointer_fd.c
OBJ		=	$(SRC:.c=.o)

LIBFT		= libft.a
SUBDIRS	= ./libft/

EXEC	= a.out
CFLAGS	= -Wall -Wextra -Werror -I. -g

MAIN	= ft_printf_main.c
NAME		= libftprintf.a

#FUNCTIONS
all:	$(EXEC)
	./$(EXEC)

$(EXEC): $(LIBFT) $(NAME) 
	cc $(MAIN) $(SUBDIRS)$(LIBFT) $(NAME)

$(NAME): $(OBJ)
	cp $(SUBDIRS)/$(LIBFT) $(NAME)
	ar -rcs $@ $^

$(LIBFT):
	$(MAKE) bonus -C $(SUBDIRS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf *.a

.PHONY: subdirs $(SUBDIRS)