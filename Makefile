# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 09:38:27 by nopereir          #+#    #+#              #
#    Updated: 2022/06/14 09:37:16 by nopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CFLAGS 			= -Wall -Wextra -Werror
COMPILER 		= gcc # need change to cc -c after
DEL				= rm -f

SRCS			=  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c
SRCS			+= ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c 
SRCS			+= ft_memcpy.c ft_memmove.c ft_strlcat.c ft_strlcpy.c
SRCS			+= ft_toupper.c ft_tolower.c ft_strchr.c  ft_strrchr.c
SRCS			+= ft_strncmp.c ft_memchr.c ft_strnstr.c ft_atoi.c

AR				= ar -rcs
OBJDIR			= objs
OBJS			= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))


#---------------------------------------STYLE CODE-------------------------------------------------#
NONE			= \033[0m
INVERT			= \033[7m
RED        		= \033[1;31m
GREEN      		= \033[1;32m
SUCCESS			= [$(GREEN)✓$(NONE)]
COMPILATED := $(INVERT)$(GREEN)$(NAME):$(NONE)$(INVERT) successfully compiled! ✓$(NONE)
LIBDELETED := $(INVERT)$(RED)$(NAME):$(NONE)$(INVERT) successfully removed! ✓$(NONE)
#--------------------------------------------------------------------------------------------------#

all:	$(NAME)

$(NAME): $(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@ranlib $(NAME)
		@echo "$(COMPILATED)"

$(OBJDIR)/%.o:    %.c	norm
	@echo -n $(NAME):' $@: '
	@mkdir -p $(OBJDIR)
	$(NORM)
	@$(COMPILER) $(CFLAGS) -c $< -o $@
	@echo "$(SUCCESS)"

clean:
	@$(DEL) $(OBJS)

fclean:		clean
	@$(DEL) $(NAME)
	@echo "$(LIBDELETED)"

norm:
	@norminette $(SRCS) $(INCLUDE)

re: fclean all

.PHONY: all clean fclean re
