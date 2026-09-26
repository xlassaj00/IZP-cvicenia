CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Werror 
LDFLAGS = -lm
TARGET = test9
SRC = test9.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET).exe $(TARGET)