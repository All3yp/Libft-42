# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nopereir <nopereir@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 09:38:27 by nopereir          #+#    #+#              #
#    Updated: 2022/07/02 12:13:05 by nopereir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a
CFLAGS 			= -Wall -Wextra -Werror
CC 				= cc
DEL				= rm -f

SRCS			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c
SRCS			+=	ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c 
SRCS			+=	ft_memcpy.c ft_memmove.c ft_strlcat.c ft_strlcpy.c
SRCS			+=	ft_toupper.c ft_tolower.c ft_strchr.c  ft_strrchr.c
SRCS			+=	ft_strncmp.c ft_memchr.c ft_strnstr.c ft_memcmp.c
SRCS			+=	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c
SRCS			+=	ft_strtrim.c ft_split.c ft_atoi.c ft_itoa.c
SRCS			+=	ft_strmapi.c ft_striteri.c
SRCS			+=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

BONUS			=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c
BONUS			+=	ft_lstdelone.c ft_lstiter.c ft_lstlast.c
BONUS			+=	ft_lstmap.c ft_lstnew.c ft_lstsize.c

AR				= ar -rcs
OBJDIR			= objs
OBJS			= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))
OBJS_BONUS		= $(addprefix $(OBJDIR)/, $(BONUS:.c=.o))

#---------------------------------------STYLE CODE-------------------------------------------------#
NONE			= \033[0m
INVERT			= \033[7m
RED        		= \033[1;31m
GREEN      		= \033[1;32m
SUCCESS			= [$(GREEN)✓$(NONE)]
COMPILATED := $(INVERT)$(GREEN)$(NAME):$(NONE)$(INVERT) successfully compiled! ✓$(NONE)
LIBDELETED := $(INVERT)$(RED)$(NAME):$(NONE)$(INVERT) successfully removed! ✓$(NONE)
#--------------------------------------------------------------------------------------------------#

$(NAME): $(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@ranlib $(NAME)
		@echo "$(COMPILATED)"

$(OBJDIR)/%.o:    %.c	norm
	@echo -n $(NAME):' $@: '
	@mkdir -p $(OBJDIR)
	$(NORM)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(SUCCESS)"

all:	$(NAME)

bonus:	$(OBJS_BONUS)
		@$(AR)	$(NAME) $^
		@echo "$(COMPILATED)"

clean:
	@$(DEL) $(OBJS)	$(OBJS_BONUS)
	@$(RM) -r $(OBJDIR)
	@echo "OBJS REMOVED $(SUCCESS)"

fclean:		clean
	@$(DEL) $(NAME)
	@echo "$(LIBDELETED)"

norm:
	@norminette $(SRCS) $(BONUS)

re: fclean all

.PHONY: all clean fclean re
