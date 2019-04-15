CC = gcc
SRC := $(wildcard *.c)
OBJ := $(patsubst %.c, %.o, $(SRC))
OUT := session 
ARG =-Wpedantic

all: $(OBJ)
	$(CC) $^ -o $(OUT)

clean:
	rm *.o
	rm *.exe

%.o: %.c
	@echo "compile "$<
	$(CC) $(ARG) -c $< -o $@


