NAME = libft.a

SRCS_MAIN := $(filter-out %_bonus.c, $(wildcard *.c))
SRCS_BONUS := $(filter %_bonus.c, $(wildcard *.c))

OBJS_MAIN := $(SRCS_MAIN:.c=.o)
OBJS_BONUS := $(SRCS_BONUS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS_MAIN)
	ar rcs $(NAME) $(OBJS_MAIN) 

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean:
	rm -f *.o $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re

