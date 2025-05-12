NAME = test.a
CPP = c++
CPPFLAGS = -Werror -Wextra -Wall -std=c++98 -g3 -fsanitize=address 
FILES = Zombie.cpp Main.cpp newZombie.cpp randomChump.cpp
HEADERS = Zombie.hpp 
OBJDIR = obj


OBJS = $(patsubst %.cpp,$(OBJDIR)/%.o,$(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADERS)
	mkdir -p $(OBJDIR)
	$(CPP) $(CPPFLAGS) -I. -c $< -o $@

clean:
	@rm -rf $(NAME) $(OBJDIR)

fclean: clean

re: fclean all