# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichinos <$yichinos@student.42tokyo.jp>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 13:36:26 by yichinos          #+#    #+#              #
#    Updated: 2023/06/14 15:03:47 by yichinos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Fixed.cpp
INCLUDE = Fixed.hpp
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
