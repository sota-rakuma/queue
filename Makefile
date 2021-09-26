CC=gcc
CFLAG=-Wall -Werror -Wextra
NAME=libqueue.a
SRCS=ft_calloc.c \
	ft_create_que.c \
	ft_deque.c \
	ft_destroy_que.c \
	ft_enque.c \
	ft_get_que_size.c \
	ft_is_que_empty.c \
	ft_is_que_full.c
OBJS=${SRCS:.c=.o}
DEPS=${SRCS:.c=.d}

all: ${NAME}

${NAME}: ${OBJS}
	ar -rcs ${NAME} ${OBJS}

%.o:%.c
	${CC} ${CFLAGS} -MMD -MP -c -o $@ $<

-include ${DEPS}

clean:
	rm -f ${OBJS} ${DEPS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
