CC = g++
CFLAGS = -std=c++11

SRCS = main.cpp player.cpp board.cpp dice.cpp game.cpp mover.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = my_program

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.cpp
	$(CC) $(CFLAGS) -c $< -o $@

player.o: player.cpp player.h
	$(CC) $(CFLAGS) -c $< -o $@

board.o: board.cpp board.h
	$(CC) $(CFLAGS) -c $< -o $@

dice.o: dice.cpp dice.h
	$(CC) $(CFLAGS) -c $< -o $@

game.o: game.cpp game.h
	$(CC) $(CFLAGS) -c $< -o $@

mover.o: mover.cpp mover.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
