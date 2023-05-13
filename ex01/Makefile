# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 17:04:11 by yichinos          #+#    #+#              #
#    Updated: 2023/05/11 18:16:02 by yichinos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp contact.cpp phonebook.cpp
INCLUDE = phonebook.hpp contact.hpp
RM = rm -rf
OBJS_DIR= objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

ALL : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJS_DIR)%.o : %.cpp $(INCLUDE) | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR) : $(SRC)
	mkdir -p $(OBJS_DIR)

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all


