NAME= Mastermind

SRCS_DIR= sources

SRCS_NAMES= $(subst $(SRCS_DIR)/,,$(wildcard $(SRCS_DIR)/*))

SRCS= $(addprefix $(SRCS_DIR)/,$(SRCS_NAMES))

OBJS_DIR= objects

OBJS_NAMES= $(SRCS_NAMES:.c=.o)

OBJS= $(addprefix $(OBJS_DIR)/,$(OBJS_NAMES))

CC= clang

CFLAGS= -Wall -Wextra -Werror

PROG= main.c

INCLUDES_DIR= includes

SHELL= zsh

OPT= -O0

ARGS=

BRANCH= main

override GG+= -g

ifneq (,$(wildcard ./.env))
	include .env
	export
endif

all: $(NAME)

$(NAME): $(OBJS) $(PROG)
	$(CC) $(CFLAGS) $(OPT) $(GG) $(OBJS) $(PROG) -o $(NAME) \
	&& echo -e "\e$(YELLOW)$(NAME)\e$(GREEN) successfully created\e$(RESET)"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(OPT) $(GG) -c $< -o $@ -I $(INCLUDES_DIR)

$(OBJS_DIR):
	mkdir $(OBJS_DIR)

clean:
	rm -rf $(OBJS_DIR) 2>/dev/null
	echo -e "\e$(GREEN)make clean done\e$(RESET)"

fclean: clean
	rm -rf $(NAME).dSYM 2>/dev/null
	rm -rf $(NAME); echo -e "\e$(CYAN)make fclean done\e$(RESET)"

re: fclean all

test: all
	./$(NAME) $(ARGS)

git:
	git add --all
	git commit
	git push origin $(BRANCH)

.PHONY: all clean fclean re
