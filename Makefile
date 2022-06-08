# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 09:38:27 by nopereir          #+#    #+#              #
#    Updated: 2022/06/07 22:50:08 by nopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
FILES 			= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
OBJS 			:= $(FILES:$.c=o)
FLAGS 			= -Wall -Wextra -Werror
COMPILER 		= gcc # need change to cc -c after
CMD_RM			= rm -f
AR				= ar rcs
NORM			= norminette

#----------------------------STYLE CODE----------------------------#
NONE = \033[0m
INVERT := \033[7m
GREEN := \033[32m
RED := \033[31m
SUCCESS := [$(GREEN)✓$(NONE)]
COMPILATION_OK := $(INVERT)$(GREEN)Compiled ✓$(NONE)$(INVERT):$(NAME) has been successfully compiled. ✔︎ $(NONE)
LIB_DELETED := $(INVERT)$(RED)Removed ✓$(NONE)$(INVERT):$(NAME) has been successfully removed. ✔︎ $(NONE)
#------------------------------------------------------------------#

all:	$(NAME)

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "${SUCCESS}"

$(OBJS):	$(FILES)
	$(COMPILER) $(CFLAGS) -c $(FILES)
	@echo "${COMPILATION_OK}"

clean:
	$(CMD_RM) $(OBJS)
	@echo "$(LIB_DELETED)"

fclean:		clean
	$(CMD_RM) $(NAME)

norm:
	@norminette $(FILES)

re: fclean all

.PHONY: all clean fclean re