# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborda <aborda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/21 11:53:58 by aborda            #+#    #+#              #
#    Updated: 2026/06/03 16:01:37 by aborda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
RED			= \033[0;31m
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
MAGENTA		= \033[0;35m
CYAN		= \033[0;36m
RESET		= \033[0m

# Project
NAME		= pgm
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

# Directories
OBJ_DIR		= objs

# VPATH
VPATH 		= utils

# Sources
SRCS		= 	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \
				msg.cpp

# Objects
OBJS		= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

# Rules
all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(GREEN)✓$(RESET) Compiled: $(CYAN)$<$(RESET)\n"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@printf "$(GREEN)==========================================$(RESET)\n"
	@printf "$(GREEN)✓ $(NAME) created successfully!$(RESET)\n"
	@printf "$(GREEN)==========================================$(RESET)\n"

clean:
	@rm -rf $(OBJ_DIR)
	@printf "$(YELLOW)✓ Object files removed$(RESET)\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(YELLOW)✓ $(NAME) removed$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
