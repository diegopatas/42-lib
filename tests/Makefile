LINKER		= gcc
COMPILER	= $(LINKER) -c
FLAGS_C		= -Wall -Wextra -Werror

REMOVE		= rm
REMOVE_FORCE	= $(REMOVE) -rf

ifdef GDB
COMPILER	+= -g3
endif

# DIRECTORIES
ROOT_DIR	= ..
SRC_DIR		= $(ROOT_DIR)
INCL_DIR	= $(ROOT_DIR)
UNIT_DIR	= $(ROOT_DIR)/tests/Unity

UNIT_SRC_DIR	= $(UNIT_DIR)/src
UNIT_FIXT_DIR	= $(UNIT_DIR)/extras/fixture/src
UNIT_MEM_DIR	= $(UNIT_DIR)/extras/memory/src

# FILES
HEAD_FILE	= utest.h
UNIT_SRC_HEAD	= $(UNIT_SRC_DIR)/unity.h
UNIT_FIXT_HEAD	= $(UNIT_SRC_DIR)/unity_fixture.h
INCL_PATH	= -I. -I$(INCL_DIR)/libft -I$(UNIT_SRC_DIR) -I$(UNIT_FIXT_DIR) -I$(UNIT_MEM_DIR) 
SRC_FILE	= $(wildcard $(SRC_DIR)/*c)
SRC_FILE	+= $(wildcard $(SRC_DIR)/tests/*c)
OBJ_FILE	= $(SRC_FILE:%.c=%.o)

UNIT_SRC_FILE	= $(UNIT_SRC_DIR)/unity.c 
UNIT_FIXT_FILE	= $(UNIT_FIXT_DIR)/unity_fixture.c 
 
NAME		= tester 
# LIBFT		= ../libraries/libft/libft.a

all: $(NAME)

$(NAME): $(OBJ_FILE) $(HEAD_FILE)
	$(LINKER) $(FLAGS_C) $(UNIT_SRC_FILE) $(UNIT_FIXT_FILE) $(OBJ_FILE) $(INCL_PATH) -o $@

%.o: %.c $(HEAD_FILE)
	$(COMPILER) $(INCL_PATH) $< -o $@

clean:
	$(REMOVE_FORCE) $(OBJ_FILE)

fclean: clean
	$(REMOVE_FORCE) $(NAME)

re: fclean all

debug:
	gdb -tui -q $(NAME)

test: all clean
	./$(NAME)

.PHONY: all clean fclean re debug test
