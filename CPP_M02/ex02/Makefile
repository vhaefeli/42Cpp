# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 16:17:44 by vhaefeli          #+#    #+#              #
#    Updated: 2023/01/12 16:37:13 by vhaefeli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET		= Fixed
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror
CPPFLAGS	= -Iinclude
SRC_DIR		= src
OBJS_DIR	= obj
SRCS		= main.cpp \
			  Fixed.cpp \

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

$(OBJS_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJS_DIR)
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $^

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LDFLAGS)

$(OBJS_DIR):
	@mkdir -p $(dir $(OBJS))

.PHONY: all clean fclean re test 98 bear
