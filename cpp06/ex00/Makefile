NAME =  a.out
SRCS =  main.cpp ScalarConversion.cpp
INC = ScalarConversion.hpp
CXXFLAGS = -Wall -Wextra -Werror
CXX = c++
OBJS = $(SRCS:.cpp=.o)
OBJS_DIR = objs

ALL : $(NAME)

$(NAME) : $(OBJS) $(INC)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

OBJS : 
	mkdir -p $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRCS)
