NAME = LittleBlackBook
COMP = clang++
FLAGS = -Wall -Werror -Wextra
FUNCS = main \
		Phonebook 

SRCC = $(addsuffix .cpp, $(FUNCS))
SRCO = $(addsuffix .o, $(FUNCS))

all: $(NAME)

$(NAME):	$(SRCO)
	@$(COMP) $(FLAGS) -c $(SRCC)
	@$(COMP) -o $(NAME) $(SRCO) 
clean:
	@rm -f $(SRCO)

fclean: clean
	@rm -f $(NAME)

re: fclean all
