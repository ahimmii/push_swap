NAME = push_swap
CC = gcc
FLAGS = 

INC = ft_push_swap.h

CFILES = error_handler/is_duplicate.c error_handler/is_integer.c \
instructions/ft_pa.c instructions/ft_pb.c instructions/ft_ra.c instructions/ft_rb.c instructions/ft_rra.c \
instructions/ft_rrb.c instructions/ft_sa.c instructions/ft_sb.c \
libft/ft_atoi.c libft/ft_get_next_line.c libft/ft_putstr_fd.c libft/ft_strdup.c libft/ft_strcmp.c \
libft/ft_strlen.c libft/ft_swap.c push_swap_utils/ft_tab_malloc.c \
src/ft_is_sorted.c src/ft_max_nbr.c src/ft_max_pos.c src/ft_mid_pivot.c src/ft_min_nbr.c src/ft_min_pos.c src/ft_next_min.c src/ft_pick_pivot.c \
src/ft_proximity_b.c src/ft_proximity.c ft_push_swap.c src/ft_redo.c src/ft_send_to_a.c src/ft_send_to_b.c src/ft_size_tab.c src/ft_stack_big.c src/ft_stack_logic.c \
src/ft_stack_of_2.c src/ft_stack_of_3_b.c src/ft_stack_of_3.c src/ft_stack_of_4.c src/ft_stack_of_5.c libft/ft_strjoin.c

CHECKERFIILES = bonus/bonus_utils.c bonus/bonus.c bonus/ft_ra_bonus.c \
instructions/ft_pa.c instructions/ft_pb.c instructions/ft_ra.c instructions/ft_rb.c instructions/ft_rra.c \
instructions/ft_rrb.c instructions/ft_sa.c instructions/ft_sb.c \
libft/ft_atoi.c libft/ft_get_next_line.c libft/ft_putstr_fd.c libft/ft_strdup.c \
libft/ft_strlen.c libft/ft_swap.c push_swap_utils/ft_tab_malloc.c libft/ft_strcmp.c \
error_handler/is_duplicate.c error_handler/is_integer.c src/ft_is_sorted.c src/ft_size_tab.c libft/ft_strjoin.c

OCFILES = ${CFILES:.c=.o}
OCHECKERFILES = ${CHECKERFIILES:.c=.o}

all : display program
$(NAME) = all
display:
	@echo "\x1B[34m▄███████▄ ███    █▄     ▄████████    ▄█    █▄                 ▄████████    ▄████████  ▄█     █▄     ▄████████    ▄███████▄"
	@echo "███    ███ ███    ███   ███    ███   ███    ███               ███    ███   ███    ███ ███     ███   ███    ███   ███    ███"
	@echo "███    ███ ███    ███   ███    █▀    ███    ███               ███    █▀    ███    ███ ███     ███   ███    ███   ███    ███"
	@echo "███    ███ ███    ███   ███         ▄███▄▄▄▄███▄▄             ███          ███    ███ ███     ███   ███    ███   ███    ███"
	@echo "▀█████████▀  ███    ███ ▀███████████ ▀▀███▀▀▀▀███▀            ▀███████████ ▀███████████ ███     ███ ▀███████████ ▀█████████▀"
	@echo "███        ███    ███          ███   ███    ███                      ███   ███    ███ ███     ███   ███    ███   ███"
	@echo "███        ███    ███    ▄█    ███   ███    ███                ▄█    ███   ███    ███ ███ ▄█▄ ███   ███    ███   ███"
	@echo "▄████▀      ████████▀   ▄████████▀    ███    █▀               ▄████████▀    ███    █▀   ▀███▀███▀    ███    █▀   ▄████▀\x1B[33m"
program : $(OCFILES)
	@ echo "Compiling Push_Swap...."
	@$(CC) $(FLAGS) $(OCFILES) -o push_swap

bonus : displaybonus checker
displaybonus:
	@echo "\x1B[32m▄████▄   ██░ ██ ▓█████  ▄████▄   ██ ▄█▀▓█████  ██▀███"
	@echo "▒██▀ ▀█  ▓██░ ██▒▓█   ▀ ▒██▀ ▀█   ██▄█▒ ▓█   ▀ ▓██ ▒ ██▒"
	@echo "▒▓█    ▄ ▒██▀▀██░▒███   ▒▓█    ▄ ▓███▄░ ▒███   ▓██ ░▄█ ▒"
	@echo "▒▓▓▄ ▄██▒░▓█ ░██ ▒▓█  ▄ ▒▓▓▄ ▄██▒▓██ █▄ ▒▓█  ▄ ▒██▀▀█▄"
	@echo "▒ ▓███▀ ░░▓█▒░██▓░▒████▒▒ ▓███▀ ░▒██▒ █▄░▒████▒░██▓ ▒██▒"
	@echo "░ ░▒ ▒  ░ ▒ ░░▒░▒░░ ▒░ ░░ ░▒ ▒  ░▒ ▒▒ ▓▒░░ ▒░ ░░ ▒▓ ░▒▓░"
	@echo "░  ▒    ▒ ░▒░ ░ ░ ░  ░  ░  ▒   ░ ░▒ ▒░ ░ ░  ░  ░▒ ░ ▒░"
	@echo "░         ░  ░░ ░   ░   ░        ░ ░░ ░    ░     ░░   ░"
	@echo "░ ░       ░  ░  ░   ░  ░░ ░      ░  ░      ░  ░   ░"
	@echo "░                       ░\x1B[37m"

checker : $(OCHECKERFILES)
	@ echo "Compiling checker...."
	@$(CC) $(FLAGS) $(OCHECKERFILES) -o checker
clean :
	@ echo "\x1B[31mCleaning..."
	@ rm -rf $(OCFILES) $(OCHECKERFILES)
fclean : clean
	@ echo "\x1B[31mCleaning all..."
	@ rm -rf push_swap
	@ rm -rf checker
re : fclean all
.PHONY : all clean fclean re bonus checker
