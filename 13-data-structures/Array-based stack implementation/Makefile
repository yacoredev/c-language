CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/stack.c src/main.c
OBJ = $(SRC:.c=.o)
TARGET = stack_app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o $(TARGET)
