NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER_FILE = libft.h

SRCS_MAIN := \
	ft_atoi.c \
	ft_bzero.c \
	memory/ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	memory/ft_memchr.c \
	memory/ft_memcmp.c \
	memory/ft_memcpy.c \
	memory/ft_memmove.c \
	memory/ft_memset.c \
	printf/ft_putchar_fd.c \
	printf/ft_putendl_fd.c \
	printf/ft_putnbr_fd.c \
	printf/ft_putstr_fd.c \
	strings/ft_split.c \
	strings/ft_strchr.c \
	strings/ft_strdup.c \
	strings/ft_striteri.c \
	strings/ft_strjoin.c \
	strings/ft_strlcat.c \
	strings/ft_strlcpy.c \
	strings/ft_strlen.c \
	strings/ft_strmapi.c \
	strings/ft_strncmp.c \
	strings/ft_strnstr.c \
	strings/ft_strrchr.c \
	strings/ft_strtrim.c \
	strings/ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

SRCS_BONUS := \
	list/ft_lstadd_back_bonus.c \
	list/ft_lstadd_front_bonus.c \
	list/ft_lstlast_bonus.c \
	list/ft_lstnew_bonus.c \
	list/ft_lstsize_bonus.c \
	list/ft_lstdelone_bonus.c \
	list/ft_lstclear_bonus.c \
	list/ft_lstiter_bonus.c \
	list/ft_lstmap_bonus.c

OBJS_MAIN := $(SRCS_MAIN:.c=.o)
OBJS_BONUS := $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS_MAIN)
	ar rcs $(NAME) $(OBJS_MAIN)

bonus: $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS_BONUS)

%.o: %.c $(HEADER_FILE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS_MAIN) $(OBJS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
