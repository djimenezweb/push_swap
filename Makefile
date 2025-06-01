NAME	= push_swap
CC		= cc
CFLAGS	= -Wall -Werror -Wextra -I./libft
SRC		= push_swap.c push_swap_helpers.c algorithms/basic_sort.c moves/moves_push.c moves/moves_reverse_rotate.c moves/moves_rotate.c moves/moves_swap.c validation/validation.c
OBJ		= $(SRC:.c=.o)

all: libft/libft.a $(NAME)

libft/libft.a:
	@$(MAKE) --no-print-directory -C libft

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) libft/libft.a -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@$(MAKE) --no-print-directory -C libft clean

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) --no-print-directory -C libft fclean

re: fclean all

.PHONY: all clean fclean re