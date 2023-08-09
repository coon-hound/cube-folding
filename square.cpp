#include "square.h"

Square::Square() {
	up = nullptr;
	down = nullptr;
	right = nullptr;
	left = nullptr;
}

Square::~Square() {

}

void Square::SetUp(Square *up) {
	this->up = up;
}

void Square::SetDown(Square *down) {
	this->down = down;
}

void Square::SetRight(Square *right) {
	this->right = right;
}

void Square::SetLeft(Square *left) {
	this->left = left;
}

Square* Square::GetUp() {
	return up;
}

Square* Square::GetDown() {
	return down;
}

Square* Square::GetRight() {
	return right;
}

Square* Square::GetLeft() {
	return left;
}

