##
## EPITECH PROJECT, 2019
## my_printf
## File description:
## Makefile
##

CC 			= 	c99

SRC			= 	$(addprefix $(SRC_D), $(SRC_F))
OBJ 		= 	$(SRC:.c=.o)
SRC_D 		= 	lib/my/
SRC_F 		= 	my_printf.c \
				my_char_to_str.c \
				my_arg_to_str.c \
				my_percentage_to_str.c \
				my_is_printable.c \
				my_np_to_str.c \
				my_strcat.c \
				my_decimal_to_octal.c \
				my_putchar.c \
				my_putstr.c \
				my_revstr.c \
				my_strlen.c \
				my_intlen.c \
				my_get_denominator.c \
				my_format_id.c \
				my_int_to_strnum.c \
				my_decimal_to_binary.c \
				my_char_to_octal.c \
				my_puterr.c \

SRC_UT   	=	$(addprefix $(SRC_UT_D), $(SRC_UT_F))
OBJ_UT 	 	=	$(SRC_UT:.c=.o)
SRC_UT_D 	= 	tests/
SRC_UT_F 	= 	test_my_is_format_id.c \
				test_my_decimal_to_binary.c \
				test_my_char_to_octal.c

INC			= 	-I./include/

CFLAGS		= 	-W -Wall -Wextra -Werror $(INC)

LDFLAGS_UT	= 	-lcriterion --coverage

NAME 		= 	libmy.a

NAME_UT 	= 	unit_tests

all: $(NAME)

$(NAME): $(OBJ)
	@echo -e "\e[1;32mCompiling library $(NAME)... \e[0m"
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ./lib

tests_run: $(OBJ) $(OBJ_UT)
	@echo -e "\e[1;32mCompiling $(NAME_UT) binary... \e[0m"
	$(CC) -o $(NAME_UT) $(OBJ) $(OBJ_UT) $(CFLAGS) $(LDFLAGS_UT)
	@./$(NAME_UT)

clean:
	@echo -e "\e[1;32mRemoving source object files...\e[0m"
	rm -f $(OBJ)
	@echo -e "\e[1;32mRemoving unit_tests object files... \e[0m"
	rm -f $(OBJ_UT)

fclean: clean
	@echo -e "\e[1;32mRemoving $(NAME) binary...\e[0m"
	rm -f $(NAME)
	@echo -e "\e[1;32mRemoving $(NAME_UT) binary... \e[0m"
	rm -f $(NAME_UT)

re: fclean all
