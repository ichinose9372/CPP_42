# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yichinos <yichinos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 17:04:11 by yichinos          #+#    #+#              #
#    Updated: 2023/10/30 13:02:28 by yichinos         ###   ########.fr        #
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

.PHONEY : re all clean fclean
