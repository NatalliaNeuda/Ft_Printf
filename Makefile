NAME = ftprintf

FRAEMWORKS = -framework OpenGL -framework AppKit
# FLAGS = -Werror -Wextra -Wall
SOURCES =  main.c 
LIBRARIES = libft/libft.a 

all:
	@make -C libft/ all
	@echo "\033[35mdone!\033[0m"
	@echo "Creating $(NAME) executable..."
	gcc  $(SOURCES) -o $(NAME) $(LIBRARIES) $(FLAGS)  $(FRAEMWORKS) 
	@echo "\033[35mdone!\033[0m"

# run42:
# 	./fdf maps/42.fdf

clean:
	@make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	@echo "\033[45m$(NAME) executable removed!\033[0m"
	@make -C libft/ fclean

re: fclean all