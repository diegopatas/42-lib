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
<<<<<<< HEAD
PATH_TESTER	= $(PATH_ROOT)/tests
PATH_UNITY	= $(PATH_TESTER)/Unity/src
PATH_FIXTURE	= $(PATH_TESTER)/Unity/extras/fixture/src
PATH_MEM	= $(PATH_TESTER)/Unity/extras/memory/src
=======
PATH_TESTS	= $(PATH_ROOT)/tests
PATH_UNITY	= $(PATH_TESTS)/Unity/src
PATH_FIXTURE	= $(PATH_TESTS)/Unity/extras/fixture/src
PATH_MEM	= $(PATH_TESTS)/Unity/extras/memory/src
>>>>>>> github/main

# FILES
SEARCH_INCL	= -I. -I$(PATH_INCL) -I$(PATH_UNITY) -I$(PATH_FIXTURE) -I$(PATH_MEM) 
HEADER		= tester.h
HEADER_UNITY	= $(PATH_UNITY)/unity.h
HEADER_FIXTURE	= $(PATH_UNITY)/unity_fixture.h

# SOURCES
FILE_SRC	= $(wildcard $(PATH_SRC)/*c)
<<<<<<< HEAD
FILE_SRC	+= $(wildcard $(PATH_TESTER)/*c)
=======
FILE_SRC	+= $(wildcard $(PATH_TESTS)/*c)
>>>>>>> github/main
FILE_OBJ	= $(FILE_SRC:%.c=%.o)

FILE_UNITY	= $(PATH_UNITY)/unity.c 
FILE_FIXTURE	= $(PATH_FIXTURE)/unity_fixture.c 
 
NAME		= tester 
LIBFT		= $(PATH_LIBFT)/libft.a

all: $(NAME)

$(NAME): $(FILE_OBJ) $(HEADER)
<<<<<<< HEAD
	@$(LINKER) $(FLAG) $(FILE_UNITY) $(FILE_FIXTURE) $(FILE_OBJ) $(SEARCH_INCL) -o $@

%.o: %.c $(HEADER)
	@$(COMPILER) $(SEARCH_INCL) $< -o $@

clean:
	@$(REMOVE_FORCE) $(FILE_OBJ)
=======
	$(LINKER) $(FLAG) $(FILE_UNITY) $(FILE_FIXTURE) $(FILE_OBJ) $(SEARCH_INCL) -o $@

%.o: %.c $(HEADER)
	$(COMPILER) $(SEARCH_INCL) $< -o $@

clean:
	$(REMOVE_FORCE) $(FILE_OBJ)
>>>>>>> github/main

fclean: clean
	@$(REMOVE_FORCE) $(NAME)

re: fclean all

debug: clean
	gdb -tui -q $(NAME)

test: all clean
	./$(NAME)

leak: all clean
<<<<<<< HEAD
	@$(VAL_MEMCHECK) $(FLAG_LEAK) ./$(NAME)
=======
	$(VAL_MEMCHECK) $(FLAG_LEAK) ./$(NAME)
>>>>>>> github/main

run: all clean
	./$(NAME)

.PHONY: all clean fclean re debug test
