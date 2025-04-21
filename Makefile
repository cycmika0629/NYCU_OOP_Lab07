# Compiler
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinc

# Targets and files
TARGET = Lab07
OBJS = main.o src/Cylinder.o

# Default rule
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp inc/Cylinder.h
	$(CXX) $(CXXFLAGS) -c main.cpp

src/Cylinder.o: src/Cylinder.cpp inc/Cylinder.h
	$(CXX) $(CXXFLAGS) -c src/Cylinder.cpp -o src/Cylinder.o

# Clean command
clean:
	rm -f $(TARGET) main.o src/*.o

