# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichinos <yichinos@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 17:04:11 by yichinos          #+#    #+#              #
#    Updated: 2023/05/11 17:14:35 by yichinos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
CC = g++;
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp contact.cpp phonebook.cpp
INCLUDE = phonebook.hpp contact.hpp
RM = rm -rf
OBJS = $(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
OBJS_DIR= objs/

ALL : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJS_DIR) : $(SRC) $(INCLUDE)
	mkdir -p $(OBJS_DIR)
	$(CC) $(DFLAGS) -c $< $(INCLUDE) -o $@

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all


