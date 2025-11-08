# Simple makefile to build and run main.c

CC = gcc
CFLAGS = -Wall -g
TARGET = main

all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c -lm

run: $(TARGET)
	./$(TARGET)
	rm -f $(TARGET)

clean:
	rm -f $(TARGET)