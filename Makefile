# Compiler
CC := gcc
CFLAGS := -Wall -g

# Build Target
TARGET := bin/app

# Source
SRC := $(shell find . -name "*.c")
OBJ := $(patsubst *.c, %.o, $(SRC))

# Make Command
all: $(TARGET)
$(TARGET): $(OBJ)
	@mkdir -p bin
	@$(CC) -o $@ $^
%.o: %.c
	@$(CC $(CFLAGS) -c $<
clean:
	@rm -rf $(TARGET) *.o bin/
run: all
	@./$(TARGET)
.PHONY: all clean