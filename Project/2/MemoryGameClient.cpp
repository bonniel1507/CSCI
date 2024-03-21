#include <iostream>
#include <string>
#include "MemoryGame.hpp"
using namespace std;

int main() {

	MemoryGame game;
	game.~MemoryGame();

	MemoryGame game2(3, 9);
	game2.~MemoryGame();

	string words[] = {"Hello", "Hi", "Hey"};
	int size = sizeof(words) / sizeof(words[0]);
	MemoryGame game3(words, 3, 9);
	game3.~MemoryGame();

	return 0;
}

/*
Here the command to compile the codes. Note that we have two C++ source codes: MemoryGame.cpp and MemoryGameClient.cpp.

\begin{verbatim}
g++ -std=c++11 -o run MemoryGameClient.cpp MemoryGame.cpp
./run
\end{verbatim}
*/
