# CP143 Makefile for Yorozuya Parfait Calculator
# This file tells the computer how to compile your program

CC = gcc
CFLAGS = -Wall -Werror -std=c99 -pedantic -g
TARGET = yorozuya
SRCDIR = src
OBJS = $(SRCDIR)/main.o $(SRCDIR)/parfait.o

# Default target: build the program
all: $(TARGET)

# How to build the final program
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)
	@echo "✓ Build complete! Run with: ./$(TARGET)"

# How to compile .c files into .o files
$(SRCDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Run the test program
test: $(TARGET)
	./$(TARGET)

# Clean up compiled files
clean:
	rm -f $(SRCDIR)/*.o $(TARGET)
	@echo "✓ Cleaned up!"

# Declare these aren't real files
.PHONY: all test clean
