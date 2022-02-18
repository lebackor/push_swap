

SRCS	=	check_errors.c\
			liste_chaine.c\
			movements.c\
			push_swap.c\
			algo.c\
			libft/ft_printf.c\
			libft/ft_strlen.c\
			libft/ft_atoi.c\
			libft/ft_putstr.c\
			libft/ft_printf_utils.c\
			libft/ft_putstr.c\
			libft/ft_putnbr.c\
			libft/ft_putchar.c\

OBJS = ${SRCS:.c=.o}

CC	=	gcc

FLAGS = -Wall -Werror -Wextra

NAME = push_swap

.c.o:
		${CC} ${FLAGS} -I includes -c $< -o ${<:.c=.o}

all : ${NAME}

${NAME} :	${OBJS} $(NAME)

clean :
		rm -f ${OBJS}

fclean :	clean
			rm -f ${NAME}

re : fclean all

.PHONY: all clean fclean re
