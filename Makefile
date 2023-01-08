CC = gcc
SOURCES = src/main.c
OBJECTS = $(SOURCES:.c=.o)
EXECUTABLE = main
BUILD_DIR = build

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(BUILD_DIR)/$@

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJECTS) $(BUILD_DIR)
