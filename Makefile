NAME = push_swap

FLAGS = -Wall -Wextra -Werror

src = main.c movements.c commands.c commands2.c index.c lst_funct.c \
	  sort.c libft.c

obj = $(src:.c=.o)

%.o:%.c push_swap.h Makefile
	cc $(FLAGS) -c $< -o $@

all: ${NAME}

${NAME}: ${obj} push_swap.h Makefile
	cc $(FLAGS) ${obj} -o ${NAME} -g
	

clean:
	rm -f ${obj}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all cean fclean re
