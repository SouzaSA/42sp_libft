SRCS =	ft_atoi.c		\
		ft_isalpha.c	\
		ft_memchr.c		\
		ft_memset.c		\
		ft_strjoin.c	\
		ft_strncmp.c	\
		ft_substr.c		\
		ft_bzero.c		\
		ft_isascii.c	\
		ft_memcmp.c		\
		ft_split.c		\
		ft_strlcat.c	\
		ft_strnstr.c	\
		ft_tolower.c	\
		ft_calloc.c		\
		ft_isdigit.c	\
		ft_memcpy.c		\
		ft_strchr.c		\
		ft_strlcpy.c	\
		ft_strrchr.c	\
		ft_toupper.c	\
		ft_isalnum.c	\
		ft_isprint.c	\
		ft_memmove.c	\
		ft_strdup.c		\
		ft_strlen.c		\
		ft_strtrim.c

OBJS = ${SRDCS: .c=.o}

NAME = libft.a

CC = clang

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:		rm -rf ${OBJS_DIR}

fclean: 	clean
			rm -f ${NAME}

re:			fclean all

.PONY:		all clean fclean re