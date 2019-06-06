# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwestvig <mwestvig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/06 14:44:32 by mwestvig          #+#    #+#              #
#    Updated: 2019/06/06 14:48:11 by mwestvig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     := zombie

SRCS     := main.cpp Zombie.cpp ZombieEvent.cpp
HDRS     := Zombie.hpp
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
