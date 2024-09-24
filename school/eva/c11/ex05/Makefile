SRC_DIR := .
BUILD_DIR := $(SRC_DIR)

FILES := main.c ft_atoi.c ops.c
SRC_FILES := $(addprefix $(SRC_DIR)/, $(FILES))
OBJECTS := $(SRC_FILES:.c=.o)

NAME := do-op

CC := cc
CFLAGS := -Wall -Wextra -Werror

.PHONY: all clean fclean re
all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAGS) -o $@ $(OBJECTS)
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -o $@ -c $<

fclean: clean
	@rm -f $(NAME)
clean:
	@rm -f $(OBJECTS)
re: fclean all
