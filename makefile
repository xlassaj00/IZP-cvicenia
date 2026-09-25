CC = gcc
CFLAGS = -std=c23 -Wall -Wextra -Werror 
LDFLAGS = -lm
TARGET = test2
SRC = test2.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET).exe $(TARGET)