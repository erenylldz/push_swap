NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
SRCS = args.c dup_list.c fd_utils.c ft_n_atoi.c ft_split.c libft_utils.c \
	main.c push.c radix.c sort_func.c start.c step.c str_utils.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(SRCS)
	@$(CC) $(CFLAGS) -c $(SRCS)


clean:
	@$(RM) $(OBJ)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean all clean

.PHONY: all clean fclean re
