SRC_DIR = ./src
OBJ_DIR = ./obj
INC_DIR = ./inc
DEP_DIR = ./deps
MLX_DIR = ./mlx
LIBFT_DIR = ./libft

SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CFLAGS = -Wall -I $(INC_DIR)

FRAMEWORKS = -framework OpenGL -framework AppKit

LIBFT = $(DEP_DIR)/$(LIBFT_DIR)/libft.a
MLX = $(DEP_DIR)/$(MLX_DIR)/libmlx.a

NAME = libist.a

all: $(OBJ_DIR) $(LIBFT) $(MLX) $(NAME)

$(OBJ_DIR):
	mkdir -p $@

$(LIBFT):
	make -C $(DEP_DIR)/$(LIBFT_DIR)

$(MLX):
	make -C $(DEP_DIR)/$(MLX_DIR)

$(NAME): $(OBJ)
	@$(AR) -r $(NAME) $(OBJ)

$(OBJ): $(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) -c $(CFLAGS) $< -o $@

run: all
	@echo "\033[92m \033[3mRunning \033[0m \033[0m"
	gcc test.c $(NAME) $(MLX) $(LIBFT) $(FRAMEWORKS) -I $(INC_DIR) -o test.run
	./test.run
	@rm -rf test.run

clean:
	rm -rf obj
	rm -rf test.run

fclean: clean
	rm -rf $(NAME)
	make fclean -C $(DEP_DIR)/$(LIBFT_DIR)
	make clean -C $(DEP_DIR)/$(MLX_DIR)

re: fclean all