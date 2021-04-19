CC = g++

main: main.o math_max.o math_min.o
	$(CC) main.cpp math_max.o math_min.o -o main

main.o: main.cpp
	$(CC) -c main.cpp

math_max.o: math_max.h math_max.cpp
	$(CC) -c math_max.cpp

math_min.o: math_min.h math_min.cpp
	$(CC) -c math_min.cpp

clean:
	rm main *.o