# -=-=-=-=-    NAME -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

NAME		= 	push_swap

# -=-=-=-=-    PATH -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

LIBDIR		=	Libft/

# -=-=-=-=-    FILES -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

SRCS		=	main.c push_swap_args.c

HEADER		=	push_swap.h

MAKE		=	Makefile

OBJS		=	$(SRCS:%.c=%.o)

LIBFT		=	libft.a

# -=-=-=-=-    FLAGS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= #

CC		=	-cc
CFLAGS		=	-Werror -Wextra -Wall
INCLUDE		=	-I

# -=-=-=-=-    TARGETS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- #

all: $(NAME) $(LIBFT)

$(NAME): $(LIBFT) $(OBJS) $(SRCS) $(HEADER) $(MAKE)
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDE) $(HEADER) $(LIBDIR)$(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBDIR)

%.o: %.c $(HEADER) $(MAKE)
	$(CC) $(CFLAGS) -I./ -c $< -o $@

clean:
	/bin/rm -f $(OBJS)
	make clean -C Libft

fclean: clean
	/bin/rm -f $(NAME)
	make fclean -C Libft

re: fclean all

.PHONY:  all clean fclean re
