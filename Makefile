all:
	g++ -std=c++20 -Wall -Werror -c square.cpp
	g++ -std=c++20 -Wall -Werror -c cube.cpp
	g++ -std=c++20 -Wall -Werror -c main.cpp
	g++ -g main.o square.o cube.o -o out

clean:
	rm -rf *.o out
