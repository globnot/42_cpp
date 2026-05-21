# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aborda <aborda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/21 11:53:58 by aborda            #+#    #+#              #
#    Updated: 2026/04/29 10:36:27 by aborda           ###   ########.fr        #
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
NAME		= zombie
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98

# Directories
OBJ_DIR		= objs

# Sources
SRCS		= 	main.cpp \
				Zombie.cpp \
				newZombie.cpp \
				randomChump.cpp

# Objects
OBJS		= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

# Rules
all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)✓$(RESET) Compiled: $(CYAN)$<$(RESET)"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)==========================================$(RESET)"
	@echo "$(GREEN)✓ $(NAME) created successfully!$(RESET)"
	@echo "$(GREEN)==========================================$(RESET)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(YELLOW)✓ Object files removed$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(YELLOW)✓ $(NAME) removed$(RESET)"

re: fclean all

.PHONY: all clean fclean re
