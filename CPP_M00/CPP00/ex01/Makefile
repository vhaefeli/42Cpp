# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vhaefeli <vhaefeli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 11:59:13 by vhaefeli          #+#    #+#              #
#    Updated: 2022/11/23 11:58:43 by vhaefeli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET		= phonebook
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror
CPPFLAGS	= -Iclass
SRCS_DIR	= src
CLASS_DIR	= class
OBJS_DIR	= obj
SRCS		= $(CLASS_DIR)/Contact.cpp\
				$(CLASS_DIR)/PhoneBook.cpp\
				$(SRCS_DIR)/main.cpp

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

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $^

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LDFLAGS)

$(OBJS_DIR):
	@mkdir -p $(dir $(OBJS))

.PHONY: all clean fclean re test 98 bear
