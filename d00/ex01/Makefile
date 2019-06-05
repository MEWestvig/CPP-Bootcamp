# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 12:33:21 by mwestvig          #+#    #+#              #
#    Updated: 2019/06/05 11:54:03 by mwestvig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= phonebook

SRCS		:= Contact.class.cpp addContact.cpp main.cpp
HDRS		:= Contact.class.hpp
OBJS		:= $(SRCS:.cpp=.o)

CXX			:= clang++
CXXFLAGS	:= -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "Objects have been removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) has been removed!"

re:     fclean all

.PHONY: all clean fclean format re
