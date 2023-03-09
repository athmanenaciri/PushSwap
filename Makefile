# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 21:13:58 by anaciri           #+#    #+#              #
#    Updated: 2022/12/08 16:59:46 by anaciri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra
DBUILD = build
FILES = main another_chunk push_back push_chunk push_five push_three \
	instra/ft_push_a instra/ft_r_rotate_all instra/ft_rotate_all \
	instra/ft_swap_all instra/ft_push_b instra/ft_r_rotate_b instra/ft_rotate_b \
	instra/ft_swap_b instra/ft_r_rotate_a instra/ft_rotate_a instra/ft_swap_a \
	utils/ft_atoi utils/if_sorted utils/indexing utils/repeat \
	list/ft_lstadd_front list/ft_lstlast list/ft_lstnew list/ft_lstadd_back \
	list/ft_lstsize list/ft_before_last list/ft_lstclear \

FILES_BONUS = push_three checker/main checker/exec checker/get_next_line_utils checker/get_next_line \
	instra_bonus/ft_push_a instra_bonus/ft_r_rotate_all instra_bonus/ft_rotate_all \
	instra_bonus/ft_swap_all instra_bonus/ft_push_b instra_bonus/ft_r_rotate_b \
	instra_bonus/ft_rotate_b instra_bonus/ft_swap_b instra_bonus/ft_r_rotate_a \
	instra_bonus/ft_rotate_a instra_bonus/ft_swap_a instra_bonus/if_sorted_bonus \
	utils/ft_atoi utils/indexing utils/repeat utils/if_sorted \
	list/ft_lstadd_front list/ft_lstlast list/ft_lstnew \
	list/ft_lstadd_back list/ft_lstsize \
	list/ft_before_last list/ft_lstclear\
	
OBJS = $(addprefix $(DBUILD)/, $(FILES:=.o))

OBJS_BONUS = $(addprefix $(DBUILD)/, $(FILES_BONUS:=.o))

NAME = push_swap

NAME_BONUS = checker

all: $(NAME)

bonus : $(NAME_BONUS)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

$(NAME_BONUS) :$(OBJS_BONUS)
	$(CC) $^ -o $@

$(DBUILD)/%.o: src/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@ -I ./inc

clean:
	rm -rf $(OBJ) $(DBUILD)
fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all
