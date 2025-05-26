NAME	= push_swap
CC		= cc
CFLAGS	= -Wall -Werror -Wextra -I./libft
SRC		= operations_helpers.c operations_push.c operations_reverse_rotate.c operations_rotate.c operations_swap.c push_swap.c push_swap_helpers.c validation.c
OBJ		= $(SRC:.c=.o)

all: libft/libft.a $(NAME)

libft/libft.a:
	$(MAKE) -C libft

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) libft/libft.a -o $(NAME)

clean:
	@rm -f $(OBJ)
	$(MAKE) -C libft clean

fclean: clean
	@rm -f $(NAME)
	$(MAKE) -C libft fclean

re: fclean all

.PHONY: all clean fclean re