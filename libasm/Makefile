NAME 	= libasm.a

SRCS	= ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

CFLAGS 	= -Wall -Wextra -Werror

CC 		= gcc

OBJS 	= $(SRCS:.s=.o)

.s.o:
		nasm -f macho64 $< -o $@

all:	$(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)
	
test:		all
			@touch test
			gcc -Wall -Wextra -Werror -I/libasm.h libasm.a main.c -o test
			./test

re:			fclean $(NAME)

.PHONY: all clean fclean re