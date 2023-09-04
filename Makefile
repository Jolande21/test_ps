# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsteenpu <jsteenpu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 11:08:35 by jsteenpu          #+#    #+#              #
#    Updated: 2023/09/04 11:33:18 by jsteenpu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Executable file / name
NAME = push_swap

# Compiling and CFLAGS
CC = cc
CFLAGS = -Wall -Wextra -Werror 

# Directories 
LIBFT_DIR = libs/libft
SRCS_DIR = SRCS/

# Source files 
SRCS_SRCS = $(wildcard $(SRCS_DIR)/*.c)
LIBFT_SRCS = $(wildcard $(LIBFT_DIR)/*.c)

# Object files 
SRCS_OBJS = $(SRCS_SRCS:.c=.o)
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(SRCS_OBJS) $(LIBFT_OBJS)
	$(CC) $(CFLAGS) -o $@ $^

$(SRC_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

$(LIBFT_DIR)/%.o: $(LIBFT_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(SRCS_OBJS) $(LIBFT_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all