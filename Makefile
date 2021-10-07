NAME = endgame
SRC_DIR = src
INC_DIR = inc

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
INC_FILES = $(wildcard $(INC_DIR)/*.h)

CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic\
		 -framework SDL2_ttf \
	 	 -rpath resource/framework -framework SDL2 \
	 	 					  -framework SDL2_image \
	 	 					  -framework SDL2_mixer \
		-I resource/framework/SDL2_image.framework/Headers \
		-I resource/framework/SDL2_ttf.framework/Headers \
		-I resource/framework/SDL2_mixer.framework/Headers \
		-F resource/framework -I resource/framework/SDL2.framework/SDL2

RM = rm -rf

all: MINILIBMX clean

MINILIBMX:
	@$(CC) $(CFLAGS) $(SRC_FILES) -I $(INC_DIR) -o $(NAME)

$(OBJ_FILES): | $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_FILES)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

$(OBJ_DIR):
	@$(MKDIR) $@

clean:
	@$(RM) $(OBJ_DIR)

uninstall: clean
	@$(RM) $(NAME)

reinstall: uninstall all

