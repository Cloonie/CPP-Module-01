# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/08 17:34:00 by mliew             #+#    #+#              #
#    Updated: 2023/03/08 17:34:00 by mliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
CC			=	g++
CPPFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS	+=	-std=c++98
RM			=	rm -rf

SRCS		=	main.cpp	\
				Weapon.hpp	\
				Weapon.cpp	\
				HumanA.hpp	\
				HumanA.cpp	\
				HumanB.hpp	\
				HumanB.cpp	\


all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo Removing object files...
	@$(RM) $(OBJS_DIR)

fclean: clean
	@echo Removing program file...
	@$(RM) $(NAME)

re:	fclean all