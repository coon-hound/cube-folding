#include "square.h"
#include <map>

Square::Square() {
	up = nullptr;
	down = nullptr;
	right = nullptr;
	left = nullptr;
}

std::map<Square*, bool> beenTo;

void delHelper(Square* curr) {
	if(beenTo[curr]) {
		return;
	}

	beenTo.insert({curr, true});

	delHelper(curr->GetDown());
	delHelper(curr->GetUp());
	delHelper(curr->GetRight());
	delHelper(curr->GetLeft());

	delete curr;
}

Square::~Square() {
	delHelper(this);
	
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

void Square::SetId(int x) {
	id = x;
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

int Square::GetId() {
	return id;
}