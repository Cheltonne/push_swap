NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror
FLAGS = -Llibft -lft
RM = rm -f

FILES = push_swap \
	     push_swap_utils \
	     parser \
	     free_fct \
	     moves \
	     sorting \

SRCS =  $(addsuffix .c, $(FILES))

OBJS =	$(addsuffix .o, $(FILES))

.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	make -C libft
	$(CC) $(CFLAGS) -o $@ $^ $(FLAGS)

all: $(NAME)

clean:
	make clean -C libft 
	$(RM) $(OBJS)

fclean: clean
	make fclean -C libft
	$(RM) $(NAME)

norminette: $(SRCS)
	norminette $(SRCS) push_swap.h

re: clean all

.PHONY: all clean fclean re
