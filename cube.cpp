#include "cube.h"
#include <vector>

void Cube::SetTop(std::vector<Square> up) {
	this->top = up;
}

void Cube::SetTop(Square up) {
	this->top.push_back(up);
}

void Cube::SetBottom(std::vector<Square> down) {
	this->bottom = down;
}

void Cube::SetBottom(Square down) {
	this->bottom.push_back(down);
}

void Cube::SetRight(std::vector<Square> right) {
	this->top = right;
}

void Cube::SetRight(Square right) {
	this->top.push_back(right);
}

void Cube::SetLeft(std::vector<Square> left) {
	this->top = left;
}

void Cube::SetLeft(Square left) {
	this->top.push_back(left);
}

void Cube::SetFront(std::vector<Square> front) {
	this->top = front;
}

void Cube::SetFront(Square front) {
	this->top.push_back(front);
}

void Cube::SetBack(std::vector<Square> back) {
	this->top = back;
}

void Cube::SetBack(Square back) {
	this->top.push_back(back);
}
