# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/26 13:04:34 by hoakoumi          #+#    #+#              #
#    Updated: 2023/04/11 21:10:57 by hoakoumi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER = checker
NAME = push_swap
SRCS =   mandatory/list1.c mandatory/main.c  mandatory/outils1.c mandatory/sort.c mandatory/libft.c mandatory/libft1.c mandatory/instructions.c mandatory/check_sorting.c mandatory/list.c mandatory/liste_to_table.c mandatory/push_to_a.c mandatory/push_to_b.c mandatory/sort_100.c mandatory/push_to_a_outils.c mandatory/instruction1.c mandatory/instruction2.c
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address -g


CC = cc
RM = rm -rf
all: $(NAME)

OBJ = $(SRCS:%.c=%.o)
OBJB = $(SRCSB:%.c=%.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS)   $(SRCS) -o $(NAME)
SRCSB = bonus/outils3.c bonus/list1.c bonus/push_swap_bonus.c bonus/outils1.c  bonus/libft.c bonus/libft1.c bonus/insb.c  bonus/list.c    bonus/get_next_line.c bonus/insb2.c bonus/insb1.c bonus/get_ou.c
bonus : $(CHECKER)

$(CHECKER): $(OBJB)
	$(CC) $(CFLAGS) $(SRCSB) -o $(CHECKER)

clean:
	$(RM) $(OBJ) $(OBJB)

fclean: clean
	$(RM) $(NAME) $(CHECKER)

re: fclean all
