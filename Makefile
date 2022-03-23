NAME 	= 	libft.a
CC		= 	gcc
CFLAGS	= 	-Wall -Wextra -Werror


SRCS    =	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
			ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
			ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
			ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
			ft_tolower.c ft_toupper.c

BONUS	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
			ft_lstmap_bonus.c

ifdef WITH_BONUS
OBJS = $(SRCS:.c=.o) $(BONUS:.c=.o)
else
OBJS = $(SRCS:.c=.o)
endif

GREEN = \033[38;5;2m
NORMAL = \033[38;5;255m
RED = \033[38;5;1m
BLUE = \033[38;5;4m

all: ${NAME}

${NAME}: ${OBJS}
	@ar rc $@ $(OBJS)

%.o: %.c
	@echo "$(GREEN)Compiling:$(NORMAL)"
	@echo "making object file" $< "->" $@
	@$(CC) $(CFLAGS) -o $@ -c $<

bonus:
	@$(MAKE) WITH_BONUS=1 all

clean:
	@echo "$(RED)Removing all object files...$(NORMAL)"
	@rm -f $(SRCS:.c=.o) $(BONUS:.c=.o)
	@echo "$(GREEN)Object files succesfully removed!$(NORMAL)"

fclean: clean
	@echo "$(RED)Removing libft.a$(NORMAL)"
	@rm -f ${NAME}
	@echo "$(GREEN)libft.a removed!"
	
re: fclean all

.PHONY: all clean fclean re bonus