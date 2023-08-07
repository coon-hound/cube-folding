#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include "square.h"

class Cube {
public:
	Cube() = default;
	~Cube() = default;

	void SetTop(std::vector<Square> up);
	void SetTop(Square up);

	void SetBottom(std::vector<Square> down);
	void SetBottom(Square down);

	void SetRight(std::vector<Square> right);
	void SetRight(Square right);

	void SetLeft(std::vector<Square> left);
	void SetLeft(Square left);

	void SetFront(std::vector<Square> front);
	void SetFront(Square front);

	void SetBack(std::vector<Square> back);
	void SetBack(Square back);

	std::vector<Square> GetTop();
	std::vector<Square> GetBottom();
	std::vector<Square> GetRight();
	std::vector<Square> GetLeft();
	std::vector<Square> GetFront();
	std::vector<Square> GetBack();

private:
	std::vector<Square> front;
	std::vector<Square> back;
	std::vector<Square> left;
	std::vector<Square> right;
	std::vector<Square> top;
	std::vector<Square> bottom;
};


#endif // CUBE_H