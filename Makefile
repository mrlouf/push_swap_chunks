# -=-=-=-=-    NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

NAME		= 	push_swap

# -=-=-=-=-    PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

INCLUDES	=	includes/

LIBDIR		=	libft/

# -=-=-=-=-    FILES -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

SRCS		=	srcs/main.c			\
				srcs/check_format.c	\
				srcs/form_stack.c	\
				srcs/free_stacks.c	\
				srcs/get_args.c		\
				srcs/print_error.c	\
				srcs/new_stack.c	\
				srcs/stackadd_back.c\
				srcs/stacklast.c	

HEADER		=	includes/push_swap.h

MAKE		=	Makefile

OBJS		=	$(SRCS:%.c=%.o)

LIBFT		=	libft.a

# -=-=-=-=-    FLAGS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

CC			=	-cc
CFLAGS		=	-Werror -Wextra -Wall
DBFLAGS		=	-Werror -Wextra -Wall -g -fsanitize=address
INCLUDE		=	-I

# -=-=-=-=-    TARGETS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

all: $(NAME) $(LIBFT)

$(NAME): $(LIBFT) $(OBJS) $(SRCS) $(HEADER) $(MAKE)
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDE)$(HEADER) $(LIBDIR)$(LIBFT) -o $(NAME)

$(LIBFT): $(MAKE)
	make -C $(LIBDIR)
	
db: $(LIBFT) $(OBJS) $(SRCS) $(HEADER) $(MAKE)
	$(CC) $(DBFLAGS) $(OBJS) $(INCLUDE)$(HEADER) $(LIBDIR)$(LIBFT) -o $(NAME)

%.o: %.c $(HEADER) $(MAKE)
	$(CC) $(CFLAGS) -I$(HEADER) -c $< -o $@

clean:
	/bin/rm -f $(OBJS)
	make clean -C libft

fclean: clean
	/bin/rm -f $(NAME)
	make fclean -C libft

re: fclean all

.PHONY:  all clean fclean re
