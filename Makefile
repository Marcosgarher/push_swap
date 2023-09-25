# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcogar <marcogar@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/16 13:12:44 by marcogar          #+#    #+#              #
#    Updated: 2023/09/20 15:13:41 by marcogar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


####################################
#              GENERAL             #
####################################

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
LIBFT = libft/libft.a
PRINTF = ft_printf/ft_printf.a
RM = rm -rf

####################################
#             PUSH_SWAP            #
####################################

PS = push_swap.c\
	 utils.c\
	 lists.c\
	 sa.c\
	 sb.c\
	 ss.c\
	 pa.c\
	 pb.c\
	 ra.c\
	 rb.c\
	 rr.c\
	 rra.c\
	 rrb.c\
	 rrr.c\
	 hardcode.c\
	 hardcode_utils.c\
	 radix.c\
	 error.c

SRC = $(addprefix src/, $(PS))
OBJ = $(SRC:.c=.o)

####################################
#             COMMANDS             #
####################################

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@make bonus -C libft
	@make -C ft_printf
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT) $(PRINTF)

clean:
	@make fclean -C libft
	@make fclean -C ft_printf
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re