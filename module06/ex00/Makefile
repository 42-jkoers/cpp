
NAME      		= exercise

CC          	= clang++
CFLAGS      	= -Wall -Wextra -Werror -pedantic -std=c++98 -Wshadow -Wno-shadow
# CFLAGS      	= -Wall -Wextra -Werror -Wuninitialized -O3

SRCEXT      	= cpp
SRCDIR      	= src
OBJEXT      	= o
HEADEREXT		= hpp
HEADERDIR		= include
BUILDDIR    	= obj

LIBS			=
INCLUDES		= -I$(HEADERDIR)
LINK			=

OBJ_IN_DIR 		= $(BUILDDIR)/*.$(OBJEXT)
SRC 			= $(shell find $(SRCDIR) -name *.$(SRCEXT))
HEADERS 		= $(shell find $(HEADERDIR) -name *.$(HEADEREXT))
OBJ				= $(foreach src,$(SRC),$(BUILDDIR)/$(notdir $(src:.$(SRCEXT)=.$(OBJEXT))))

SILECE_MAKE 	= | grep -v -E ".*Leaving directory|.*Entering directory"
VPATH 			= $(shell find $(SRCDIR) -type d | tr '\n' ':' | sed -E 's/(.*):/\1/')
.SUFFIXES:

all: $(NAME)

$(NAME): $(BUILDDIR)/ $(OBJ) $(HEADERS)
	$(CC) $(CFLAGS) $(INCLUDES) $(OBJ_IN_DIR) $(LIBS) -o $(NAME) $(LINK)

$(BUILDDIR)/%.$(OBJEXT): %.$(SRCEXT) $(HEADERS)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $(BUILDDIR)/$(notdir $@)
# sources

test: all
	@echo
	./$(NAME) 0											; echo
	./$(NAME) 6											; echo
	./$(NAME) 1.2											; echo
	./$(NAME) a											; echo
	./$(NAME) -1											; echo
	./$(NAME) nanf									 		; echo
	./$(NAME) -inf										 	; echo
	./$(NAME) 9999999999999999999999999999999999999999999999999.0					; echo
	./$(NAME) 9a											; echo
	./$(NAME) aa											; echo



clean:
ifneq ($(BUILDDIR),.)
	/bin/rm -rf $(BUILDDIR)/
endif

fclean: | clean
	/bin/rm -f $(NAME)

re: | fclean all

$(BUILDDIR)/:
	mkdir -p $(BUILDDIR)

silent:
	@$(MAKE) > /dev/null

.PHONY: all clean fclean re silent
