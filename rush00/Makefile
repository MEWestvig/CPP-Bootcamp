NAME		:= ft_retro

SRCS		:= src/main.cpp src/GameEnviroment.cpp src/Enemy.cpp src/Player.cpp
HDRS		:= includes/GameEnviroment.hpp includes/Player.hpp includes/Enemy.hpp
OBJS		:= $(SRCS:.cpp=.o)

CXX			:= clang++
CXXFLAGS	:= -std=c++98 -Wall -Werror -Wextra
LNK			:= -lncurses

all: $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@ $(LNK)

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re:     fclean all

.PHONY: all clean fclean format re
