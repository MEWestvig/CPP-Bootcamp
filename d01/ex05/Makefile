# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpoulter <dpoulter@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 11:55:14 by dpoulter          #+#    #+#              #
#    Updated: 2019/06/06 14:27:39 by mwestvig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := humanBrain

SRCS     := main.cpp Human.cpp Brain.cpp
HDRS     := Brain.hpp
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
