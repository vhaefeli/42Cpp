# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 13:24:46 by vhaefeli          #+#    #+#              #
#    Updated: 2023/02/13 16:22:57 by vhaefeli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET		= easyfind
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
CPPFLAGS	= -Iinclude
SRC_DIR		= src
OBJS_DIR	= obj
SRCS		= main.cpp \

OBJS = 		$(patsubst %.cpp, $(OBJS_DIR)/%.o, $(SRCS))

all: $(TARGET)

UNAME= $(shell uname -s)
ifeq ($(UNAME), Darwin)
98: CXX = g++-11
endif
98: CXXFLAGS += -pedantic -std=c++98
98: fclean $(TARGET)

debug: CXXFLAGS += -g3
debug: LDFLAGS += -fsanitize=address
debug: $(TARGET)

valgrind: CXXFLAGS += -g3
valgrind: fclean $(OBJS) $(TARGET)
	valgrind --leak-check=full ./$(TARGET)

clean:
	rm -rf $(OBJS_DIR)
fclean: clean
	rm -f $(TARGET)

re: fclean all

run: all
	@-./$(TARGET)

runleaks: all
	@-leaks -atExit -- ./$(TARGET)

$(OBJS_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJS_DIR)
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $^

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LDFLAGS)

$(OBJS_DIR):
	@mkdir -p $(dir $(OBJS))

.PHONY: all clean fclean re test 98 bear
