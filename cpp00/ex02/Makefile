# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 12:04:49 by yichinos          #+#    #+#              #
#    Updated: 2023/10/29 16:19:09 by yichinos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = program
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = tests.cpp Account.cpp
INCLUDE = Account.hpp
RM = rm -rf
OBJS_DIR= objs/
OBJS = $(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJS_DIR)%.o : %.cpp $(INCLUDE)
	@mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all
