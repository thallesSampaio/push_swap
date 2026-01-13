NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

INCLUDES = -I./include -I$(LIBFT_DIR)

SRCS = main.c \
       exit_utils.c \
       is_sorted.c \
       parse_args.c \
       stack_utils.c \
       fill_stack_ints.c \
       radix_sort.c \
       sort_5_utils.c \
       str_validator.c \
       index.c \
       sort_dispatcher.c \
       push.c \
       swap.c \
       rotate.c \
       reverse_rotate.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all