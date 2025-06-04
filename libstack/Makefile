NAME	= libstack.a
CC		= cc
CFLAGS	= -Wall -Werror -Wextra
AR		= ar rcs
SRC		= ft_stackadd_back.c ft_stackadd_front.c ft_stackclear.c ft_stacklast.c ft_stacknew.c ft_stacksize.c
OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re