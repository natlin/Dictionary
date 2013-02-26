CC=g++
CFLAGS=-Wall -ansi -O2 

TARGET=main
HEADERS=element.h word.h phrase.h sentence.h dict.h
SOURCES=main.cpp word.cpp phrase.cpp sentence.cpp dict.cpp 

all:	$(SOURCES) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

