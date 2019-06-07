# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 12:50:57 by mwestvig          #+#    #+#              #
#    Updated: 2019/06/07 12:52:32 by mwestvig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := fixed

SRCS     := main.cpp Fixed.class.cpp
HDRS     := Fixed.class.hpp
OBJS     := $(SRCS:.cpp=.o)

CXX      := clang++
CXXFLAGS := -std=c++98 -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re:     fclean all

.PHONY: all clean fclean format re
