LINKER		= gcc
COMPILER	= $(LINKER) -c
FLAG		= -Wall -Wextra -Werror
FLAG_LEAK	= --leak-check=full --show-leak-kinds=all --track-origins=yes -s

VAL_MEMCHECK	= valgrind

REMOVE		= rm
REMOVE_FORCE	= $(REMOVE) -rf

ifdef GDB
COMPILER	+= -g3
endif

# DIRECTORIES
PATH_ROOT	= ..
PATH_SRC	= $(PATH_ROOT)
PATH_INCL	= $(PATH_ROOT)
PATH_LIBFT	= $(PATH_ROOT)
PATH_TESTER	= $(PATH_ROOT)/tests
PATH_UNITY	= $(PATH_TESTER)/Unity/src
PATH_FIXTURE	= $(PATH_TESTER)/Unity/extras/fixture/src
PATH_MEM	= $(PATH_TESTER)/Unity/extras/memory/src

# FILES
SEARCH_INCL	= -I. -I$(PATH_INCL) -I$(PATH_UNITY) -I$(PATH_FIXTURE) -I$(PATH_MEM) 
HEADER		= tester.h
HEADER_UNITY	= $(PATH_UNITY)/unity.h
HEADER_FIXTURE	= $(PATH_UNITY)/unity_fixture.h

# SOURCES
FILE_SRC	= $(wildcard $(PATH_SRC)/*c)
FILE_SRC	+= $(wildcard $(PATH_TESTER)/*c)
FILE_OBJ	= $(FILE_SRC:%.c=%.o)

FILE_UNITY	= $(PATH_UNITY)/unity.c 
FILE_FIXTURE	= $(PATH_FIXTURE)/unity_fixture.c 
 
NAME		= tester 
LIBFT		= $(PATH_LIBFT)/libft.a

all: $(NAME)

$(NAME): $(FILE_OBJ) $(HEADER)
	@$(LINKER) $(FLAG) $(FILE_UNITY) $(FILE_FIXTURE) $(FILE_OBJ) $(SEARCH_INCL) -o $@

%.o: %.c $(HEADER)
	@$(COMPILER) $(SEARCH_INCL) $< -o $@

clean:
	@$(REMOVE_FORCE) $(FILE_OBJ)

fclean: clean
	@$(REMOVE_FORCE) $(NAME)

re: fclean all

debug: clean
	gdb -tui -q $(NAME)

test: all clean
	./$(NAME)

leak: all clean
	@$(VAL_MEMCHECK) $(FLAG_LEAK) ./$(NAME)

run: all clean
	./$(NAME)

.PHONY: all clean fclean re debug test
