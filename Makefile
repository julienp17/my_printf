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
SRC_F 		=	my_get_converter.c \
				my_get_length_modifier.c \
				my_get_width_field.c \
				my_get_precision.c \
				my_get_flag.c \
				my_get_formatted_output.c \
				my_intlen.c \
				my_putchar.c \
				my_puterr.c \
				my_putstr.c \
				my_revstr.c \
				my_strcat.c \
				my_strcmp.c \
				my_strcpy.c \
				my_strdup.c \
				my_strlen.c \
				my_strstr.c \
				my_strnum_to_uint.c \
				my_printf.c \
				booleans/my_is_converter.c \
				booleans/my_is_digit.c \
				booleans/my_is_flag.c \
				booleans/my_is_int_converter.c \
				booleans/my_is_int_signed_converter.c \
				booleans/my_is_int_unsigned_converter.c \
				booleans/my_is_printable.c \
				booleans/my_str_isnum_neg.c \
				booleans/my_str_isnum_pos.c \
				booleans/my_str_isnum.c \
				converters/my_arg_to_str.c \
				converters/my_char_to_octal.c \
				converters/my_char_to_str.c \
				converters/my_decimal_to_binary.c \
				converters/my_decimal_to_hexa_lower.c \
				converters/my_decimal_to_hexa_upper.c \
				converters/my_decimal_to_octal.c \
				converters/my_int_to_strnum.c \
				converters/my_np_to_str.c \
				converters/my_percentage_to_str.c \
				converters/my_ptr_to_hexa_lower.c \
				converters/my_ptr_to_hexa_upper.c \
				converters/my_uint_to_strnum.c \
				flags/my_hash_flag_convertion.c \
				flags/my_minus_flag_convertion.c \
				flags/my_plus_flag_convertion.c \
				flags/my_space_flag_convertion.c \
				flags/my_zero_flag_convertion.c \
				length_modifiers/my_llint_to_strnum.c \
				length_modifiers/my_lluint_to_strnum.c \
				length_modifiers/my_lluint_to_octal.c \
				length_modifiers/my_lluint_to_hexa_lower.c \
				length_modifiers/my_lluint_to_hexa_upper.c \


SRC_UT   	=	$(addprefix $(SRC_UT_D), $(SRC_UT_F))
OBJ_UT 	 	=	$(SRC_UT:.c=.o)
SRC_UT_D 	= 	tests/
SRC_UT_F 	= 	test_my_intlen.c \
				test_my_char_to_octal.c \
				test_my_printf_no_args.c \
				test_my_strcat.c \
				test_my_puterr.c \
				booleans/test_my_is_printable.c \
				booleans/test_my_is_converter.c \
				booleans/test_my_is_flag.c \
				booleans/test_my_is_int_converter.c \
				booleans/test_my_is_int_signed_converter.c \
				booleans/test_my_is_int_unsigned_converter.c \
				booleans/test_my_str_isnum.c \
				booleans/test_my_str_isnum_neg.c \
				booleans/test_my_str_isnum_pos.c \
				converters/test_my_arg_to_str.c \
				converters/test_my_char_to_str.c \
				converters/test_my_decimal_to_binary.c \
				converters/test_my_decimal_to_hexa_lower.c \
				converters/test_my_decimal_to_hexa_upper.c \
				converters/test_my_decimal_to_octal.c \
				converters/test_my_int_to_strnum.c \
				converters/test_my_np_to_str.c \
				converters/test_my_percentage_to_str.c \
				converters/test_my_ptr_to_hexa_lower.c \
				converters/test_my_ptr_to_hexa_upper.c \
				converters/test_my_uint_to_strnum.c \
				flags/test_my_hash_flag_convertion.c \
				flags/test_my_plus_flag_convertion.c \
				flags/test_my_space_flag_convertion.c \
				flags/test_my_minus_flag_convertion.c \
				length_modifiers/test_my_llint_to_strnum.c \
				length_modifiers/test_my_lluint_to_strnum.c \

INC			= 	-I./include/

CFLAGS		= 	-W -Wall -Wextra -Werror $(INC)

LDFLAGS_UT	= 	-lcriterion -lgcov --coverage

DBFLAGS		=	-g -g3 -ggdb

NAME 		= 	libmy.a

NAME_UT 	= 	unit_tests

all: $(NAME)

$(NAME): $(OBJ)
	@echo -e "\e[1;32mCompiling library $(NAME)... \e[0m"
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ./lib

tests_run: clean $(OBJ) $(OBJ_UT)
	@echo -e "\e[1;32mCompiling $(NAME_UT) binary... \e[0m"
	$(CC) -o $(NAME_UT) $(SRC) $(SRC_UT) $(CFLAGS) $(LDFLAGS_UT)
	@./$(NAME_UT)
	@rm -f $(SRC_UT_F:.c=.gcda)
	@rm -f $(SRC_UT_F:.c=.gcno)

clean:
	@echo -e "\e[1;32mRemoving source object files...\e[0m"
	rm -f $(OBJ)
	@echo -e "\e[1;32mRemoving unit_tests object files... \e[0m"
	rm -f $(OBJ_UT)
	@echo -e "\e[1;32mRemoving coverage files...\e[0m"
	rm -f *.gc*

fclean: clean
	@echo -e "\e[1;32mRemoving $(NAME) binary...\e[0m"
	rm -f $(NAME)
	@echo -e "\e[1;32mRemoving $(NAME_UT) binary... \e[0m"
	rm -f $(NAME_UT)

re: fclean all
