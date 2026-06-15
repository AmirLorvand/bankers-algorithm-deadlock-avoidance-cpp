CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

TARGET = bankers
SOURCES = main.cpp Bankers.cpp

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) *.o
