# -=-=-=-=-    NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

NAME		= 	push_swap

# -=-=-=-=-    PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

INCLUDES	=	includes/

LIBDIR		=	libft/

# -=-=-=-=-    FILES -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

SRCS		=	srcs/push_swap.c	\
				srcs/check_format.c	\
				srcs/free_stacks.c	\
				srcs/get_args.c		\
				srcs/stack_utils.c	\
				srcs/swap.c			\
				srcs/push.c			\
				srcs/rotate.c		\
				srcs/reverse.c		\
				srcs/sort_small.c

HEADER		=	includes/push_swap.h

MAKE		=	Makefile

OBJS		=	$(SRCS:%.c=%.o)

LIBFT		=	libft.a

# -=-=-=-=-    FLAGS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

CC			=	-cc
CFLAGS		=	-Werror -Wextra -Wall -g -fsanitize=address
INCLUDE		=	-I/

# -=-=-=-=-    TARGETS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

all: $(NAME) $(LIBFT)

$(NAME): $(LIBFT) $(OBJS) $(SRCS) $(HEADER) $(MAKE)
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDE)$(HEADER) $(LIBDIR)$(LIBFT) -o $(NAME)

$(LIBFT): $(MAKE)
	make -C $(LIBDIR)

%.o: %.c $(HEADER) $(MAKE)
	$(CC) $(CFLAGS) -I/$(HEADER) -c $< -o $@

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)
	make fclean -C libft

re: fclean all

.PHONY:  all clean fclean re
