#compiler
CC := gcc
CFLAGS := -Wall -g

#build target
TARGET := bin/app

# Source
SRC := $(shell find . -name "*.c")
OBJ := $(patsubst *.c, %.o, $(SRC))

# Run
all: $(TARGET)
$(TARGET): $(OBJ)
	@mkdir -p bin
	$(CC) -o $@ $^
%.o: %.c
	$(CC $(CFLAGS) -c $<
clean:
	rm -rf $(TARGET) *.o bin/
run:
	@./$(TARGET)
.PHONY: all clean