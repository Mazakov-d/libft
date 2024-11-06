CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
NAME = libft.a
AR = ar 
ARF = rcs

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARF) $(@) $(OBJ) 

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean:
	rm -f *.o $(NAME)

re: fclean all
