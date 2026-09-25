CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Werror 
LDFLAGS = -lm
TARGET = test3
SRC = test3.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET).exe $(TARGET)