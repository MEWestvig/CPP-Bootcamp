# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 12:33:21 by mwestvig          #+#    #+#              #
#    Updated: 2019/06/04 12:41:21 by mwestvig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := phonebook

SRCS     := *.cpp
OBJS     := $(SRCS:.cpp=.o)

CXX      := clang++
CXXFLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "Objects have been removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) has been removed!"

re:     fclean all

.PHONY: all clean fclean format re
