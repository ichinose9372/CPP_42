# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 17:04:11 by yichinos          #+#    #+#              #
#    Updated: 2023/06/12 17:49:03 by yichinos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp contact.cpp phonebook.cpp
INCLUDE = phonebook.hpp contact.hpp
RM = rm -rf
OBJS_DIR= objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

ALL : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJS_DIR)%.o : %.cpp $(INCLUDE)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS_DIR) : $(SRC)
	mkdir -p $(OBJS_DIR)

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all
