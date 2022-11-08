SRCS =  $(wildcard *.c)
CC = cc

FLAGS = -Wall -Wextra -Werror -c

OBJS = ${SRCS:.c=.o}

NAME = libft.a

RM = rm -f

%.o : %.c libft.h
	${CC} ${FLAGS} $< -o $@

${NAME} : ${OBJS}
	ar -rc $@ ${OBJS}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : fclean re