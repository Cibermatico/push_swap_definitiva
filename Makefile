# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsquarci <lsquarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/09 17:55:24 by lsquarci          #+#    #+#              #
#    Updated: 2024/12/09 17:55:25 by lsquarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I $(SRCDIR)
EXEC = push_swap
SRCDIR = src
SRCDIRB = srcbonus
LIBFT = libft
INCDIR = $(LIBFT)

SRC =	init.c \
		move1.c \
		move2.c \
		move3.c \
		sort_send.c \
		sort.c \
		push_to_a.c \
		sort_small.c \
		utils.c \
		free_stack.c
SRCMAIN = main.c
SRCB = checker.c

OBJS = $(addprefix $(SRCDIR)/, $(SRC:.c=.o))
OBJMAIN = $(addprefix $(SRCDIR)/, $(SRCMAIN:.c=.o))
OBJSB = $(addprefix $(SRCDIRB)/, $(SRCB:.c=.o))

all: $(EXEC)

push_swap: $(OBJS) $(OBJMAIN)
	$(MAKE) -C $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(OBJMAIN) $(LIBFT)/libft.a -o $(EXEC)

checker: $(OBJS) $(OBJSB)
	$(CC) $(CFLAGS) $(OBJS) $(OBJSB) $(LIBFT)/libft.a -o checker

bonus: $(EXEC) checker

.c.o:
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	$(MAKE) clean -C $(LIBFT)
	rm -rf $(OBJS)
	rm -rf $(OBJMAIN)
	rm -rf $(OBJSB)

fclean: clean
	$(MAKE) fclean -C $(LIBFT)
	rm -rf $(EXEC)
	rm -rf $(EXEC) checker

re:	fclean all

.PHONY: all clean fclean re
