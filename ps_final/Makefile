.SILENT :

NAME = push_swap

CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c teleportin.c teleportin2.c sortin.c sortin_v2.c \
		sortin_v3.c sort3_ast.c ext_func.c norm_storm.c indexer.c

OBJS = ${SRCS:c=o}

%.o : %.c push_swap.h Makefile
	${CC} ${CFLAGS} -g -c $<

$(NAME) : ${OBJS} push_swap.h Makefile
	${CC} ${OBJS} -g -o $@

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all
	${fclean} ${all}