NAME = push_swap
LIBFT = $(LIBFT_DIR)libft.a

CC = gcc
CFLAGS = -Wextra -Werror -Wall -g3 -fsanitize=address
LDFLAGS = -L$(LIBFT_DIR) -lft -lm -fsanitize=address
MKDIR = mkdir -p
IFLAGS = -I$(INC) -I$(LIBFT_INC)

SORT_DIR := sort/
STACK_DIR := stack/
PS_DIR := push_swap/
INS_DIR := ins/
SRCS_DIR := srcs/
OBJS_DIR := obj/
LIBFT_DIR := libft/
LIBFT_INC := $(LIBFT_DIR)inc/
INC := inc/

PS_FILES := check parse
INS_FILES := instructions_a instructions_b
SORT_FILES := ksort sort sort_utils
STACK_FILES := stack_utils1 stack_utils2

PS_SRCS_FILES := push_swap $(PS_FILES)
SRCS_FILES +=$(addprefix $(PS_DIR), $(PS_SRCS_FILES))
SRCS_FILES +=$(addprefix $(INS_DIR), $(INS_FILES))
SRCS_FILES +=$(addprefix $(SORT_DIR), $(SORT_FILES))
SRCS_FILES +=$(addprefix $(STACK_DIR), $(STACK_FILES))

SRCS := $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRCS_FILES)))

OBJS := $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_FILES)))

DEPS := $(addprefix $(OBJS_DIR), $(addsuffix .d, $(SRCS_FILES)))

.PHONY: all clean fclean re libft

all: $(OBJS_DIR) $(NAME)

$(OBJS_DIR):
	@$(MKDIR) $(OBJS_DIR)$(PS_DIR) $(OBJS_DIR)$(INS_DIR) $(OBJS_DIR)$(SORT_DIR) $(OBJS_DIR)$(STACK_DIR)

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c Makefile | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(IFLAGS) -MP -MMD -c $< -o $@

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

$(LIBFT): libft

libft:
	@$(MAKE) -C $(LIBFT_DIR)

clean:
	$(RM) -rf $(OBJS_DIR)
	@$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	$(RM) -rf $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR)

norm:
	@norminette $(SRCS) $(INC) | grep -v Norme -B1 || true

re: fclean all

-include $(DEPS)
