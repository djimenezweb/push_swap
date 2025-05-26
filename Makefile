NAME	= push_swap
CC		= cc
CFLAGS	= -Wall -Werror -Wextra -I./libft
SRC		= operations_helpers.c operations_push.c operations_reverse_rotate.c operations_rotate.c operations_swap.c push_swap.c validation.c
OBJ		= $(SRC:.c=.o)

all: libft.a $(NAME)

libft:
	$(MAKE) -C libft

$(NAME): $(OBJ) libft/libft.a
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re