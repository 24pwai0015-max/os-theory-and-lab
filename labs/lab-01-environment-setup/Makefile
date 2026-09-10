CC = gcc
CFLAGS = -Wall -Wextra -pthread -g
TARGET = bin/test_os
SRC = src/test_os.c

all: $(TARGET)

$(TARGET): $(SRC)
	@mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	@./$(TARGET)

clean:
	rm -rf bin/

.PHONY: all run clean
