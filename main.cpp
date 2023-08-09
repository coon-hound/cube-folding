#include "square.h"
#include "cube.h"
#include <iostream>
#include <string>
#include <map>

/**
 * 1. get a count of how many square the user inputs.
 * 2. 
 *  
 *
 **/

std::vector<std::string> getInput() {
	int rows, columns;

	printf("enter the number of rows the input has: \n");
	scanf("%d", &rows);

	printf("enter the number of columns the input has: \n");
	scanf("%d", &columns);

	printf("print a '.' for a empty square and a '#' for a filled square\n"
			"print a space character ' ' in between each square\n"
			"print a '|' character to indicate a vertical slit and a '-' character to indicate a horizontal slit'\n" 
			"print a new line character after each row: \n\n\n");


	std::vector<std::string> input;

	printf("rows * 2 - 1 = %d\n", rows * 2 - 1);

	std::string eat_space;	
	std::getline(std::cin, eat_space);

	for(int i = 0; i < rows * 2 - 1; i++) {
		std::string in;
		std::getline(std::cin, in);
		input.push_back(in);
	}

	for(std::string s : input) {
		std::cout << s << std::endl;	
	}

	return input;
}

bool inBounds(int i, int j, int rows, int columns) {
	return i >= 0 && i < rows && j >= 0 && j < columns;
}

void renamemeplease(int i, int j, Square &curr, std::vector<std::string> &input) {
	int rows = input.size();
	int columns = input[0].size();

	//set the up down left right of curr. 

	//right of curr
	if(inBounds(i, j + 1, rows, columns)) {
		if(input[i][j + 1] == '|') {
			curr.SetRight(nullptr);
		}	
		else {
			if(input[i][j + 2] == ' ') {
				curr.SetRight(nullptr);
			}
			else if(input[i][j + 2] == '#') {
				Square n;
				n.SetLeft(&curr);
				curr.SetRight(&n);
			}
		}
	}

	//left of curr
	if(inBounds(i, j - 1, rows, columns)) {
		if(input[i][j - 1] == '|') {
			curr.SetLeft(nullptr);
		}	
		else {
			if(input[i][j - 2] == ' ') {
				curr.SetLeft(nullptr);
			}
			else if(input[i][j - 2] == '#') {
				Square n;
				n.SetRight(&curr);
				curr.SetLeft(&n);
			}
		}
	}

	//set up
	if(inBounds(i + 1, j, rows, columns)) {
		if(input[i + 1][j] == '-') {
			curr.SetUp(nullptr);
		}	
		else {
			if(input[i + 2][j] == ' ') {
				curr.SetUp(nullptr);
			}
			else if(input[i + 2][j] == '#') {
				Square n;
				n.SetDown(&curr);
				curr.SetUp(&n);
			}
		}
	}

	//set down
	if(inBounds(i - 1, j, rows, columns)) {
		if(input[i - 1][j] == '-') {
			curr.SetDown(nullptr);
		}	
		else {
			if(input[i - 2][j] == ' ') {
				curr.SetDown(nullptr);
			}
			else if(input[i - 2][j] == '#') {
				Square n;
				n.SetUp(&curr);
				curr.SetDown(&n);
			}
		}
	}
}

void processInput(Square &root, std::vector<std::string> &input) {
	int rows = input.size();
	int columns = input[0].size();

	Square *current = &root;

	std::cout << "rows: " << rows << std::endl;
	std::cout << "columns: " << columns << std::endl;

	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			char c = input[i][j];
		}
	}
}

std::map<Square*, bool> beenTo;

//recursivley iterate through square and print out each "square"

void printTree(Square* curr) {
	if(beenTo[curr]) {
		return;
	}

	beenTo.insert(std::pair<Square*, bool>(curr, true));

	printTree(curr->GetUp());
	printTree(curr->GetDown());
	printTree(curr->GetLeft());
	printTree(curr->GetRight());
}

int main() 
{
	Square root;
	std::vector<std::string> input = getInput();
	processInput(root, input);


}